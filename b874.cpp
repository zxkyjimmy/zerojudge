#include <iostream>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int d, arr[m] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> d;
            arr[d%m]++;
        }
        bool check[m] = {false}, tmp[m];
        for(int i = 0; i < m; i++)
        {
            if(arr[i] == 0)continue;
            for(int j = 0; j < m; j++)
            {
                tmp[j] = check[j];
            }
            for(int j = 0; j < m; j++)
            {
                check[(i+j)%m] |= tmp[j];
            }
            check[i] = true;
        }
        for(int i = 0; i < m && !check[0]; i++)
        {
            if(arr[i] < 2)continue;
            for(int j = 1; j < min(arr[i], m) && !check[0]; j++)
            {
                for(int k = 0; k < m; k++)
                {
                    tmp[k] = check[k];
                }
                for(int k = 0; k < m; k++)
                {
                    check[(i+k)%m] |= tmp[k];
                }
            }
        }
        if(check[0])cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
