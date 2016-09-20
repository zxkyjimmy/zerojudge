#include <iostream>
#include <algorithm>
using namespace std;
int x[1005];
int y[1005];
int a[1005];
int n;
bool cmp(int i, int j)
{
    if(x[i]==x[j])
    {
        return y[i] < y[j];
    }
    return x[i] < x[j];
}
int main()
{
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
            a[i] = i;
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < n; i++)
        {
            cout << x[a[i]] << " " << y[a[i]] << endl;
        }
    }
    return 0;
}
