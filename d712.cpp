#include <cstdio>
#include <algorithm>
using namespace std;
int arr[1<<20] = {0};
int bst[1<<21] = {0};
void build(int L, int R, int i)
{
    if(L == R)
    {
        bst[i] = arr[L];
    }
    else
    {
        int M = (L + R)/2;
        int LC = i*2;
        int RC = i*2+1;
        build(L, M, LC);
        build(M+1, R, RC);
        bst[i] = max(bst[LC], bst[RC]);
    }
}
int query(int L, int R, int x1, int x2, int i)
{
    if(x1<=L && R<=x2)
    {
        return bst[i];
    }
    int M = (L+R)/2;
    int LC = i*2;
    int RC = i*2+1;
    int result = 0;
    if(x1 <= M)result = max(query(L, M, x1, x2, LC),result);
    if(x2 > M)result = max(query(M+1, R, x1, x2, RC),result);
    return result;
}
int f(long long n)
{
    int result = 1;
    long long tmp = n;
    while(n > 1)
    {
        if(n&1)n = 3*n+1;
        else
        {
            n >>= 1;
            if(n < tmp)
            {
                result += arr[n]-1;
                n = 1;
            }
        }
        result++;
    }
    return result;
}
int main()
{
    for(int i = 1; i <= 1000000; i++)
    {
        if(i&1)arr[i] = f(i);
        else arr[i] = arr[i/2]+1;
    }
    build(1, 1000000, 1);
    int a, b, result;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a > b)result = query(1, 1000000, b, a, 1);
        else result = query(1, 1000000, a, b, 1);
        printf("%d %d %d\n", a, b, result);
    }
    return 0;
}
