#include <cstdio>
int main()
{
    int t, n, a, result;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        result = (n-1)*2;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if(result-i < a)
            {
                result = a + i;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
