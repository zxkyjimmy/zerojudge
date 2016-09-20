#include <cstdio>
#include <cstring>
int abs(int n)
{
    return n>0?n:-n;
}
int main()
{
    int t, r, median, d, s[30005], sum;
    long long result;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &r);
        memset(s, 0, 120020);
        for(int i = 0; i < r; i++)
        {
            scanf("%d", &d);
            s[d]++;
        }
        median = (r>>1) + (r&1);
        d = 0;
        sum = 0;
        while(sum + s[d] < median)
        {
            sum += s[d++];
        }
        result = 0;
        for(int i = 0; i < 30005; i++)
        {
            result += abs(d-i)*s[i];
        }
        printf("%lld %d\n",result, d);
    }
    return 0;
}
