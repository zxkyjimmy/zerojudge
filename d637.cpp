#include <iostream>
#include <cstring>
using namespace std;
int DP[10001][101];
int main()
{
    int n, a[10001], b[10001];
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)cin >> a[i] >> b[i];
        memset(DP, 0, sizeof(DP));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= 100; j++)
            {
                if(j - a[i] < 0)
                {
                    DP[i+1][j] = DP[i][j];
                }
                else
                {
                    DP[i+1][j] = max(DP[i][j], DP[i][j-a[i]] + b[i]);
                }
            }
        }
        cout << DP[n][100] << endl;
    }
    return 0;
}
