#include <cstdio>
#include <cstdlib>
int main()
{
    long long a, b, c, d, r;
    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &r) == 5)
    {
        if(llabs(a-c)+llabs(b-d) > r)printf("alive\n");
        else printf("die\n");
    }
    return 0;
}
