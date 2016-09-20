#include <iostream>
using namespace std;
int main()
{
    int h[20001], w[20001], t, n, m, c, H, W;
    cin >> t;
    while(t--)
    {
        c = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            cin >> h[i] >> w[i];
        }
        H = h[m];
        W = w[m];
        bool check[20001] = {false};
        for(int i = 1; i <= n; i++)
        {
            if(h[i] > H && w[i] > W)
            {
                bool flag = true;
                for(int j = 1; j <= n && flag; j++)
                {
                    if(h[j] > h[i] && w[j] > w[i])
                    {
                        flag = false;
                    }
                }
                if(flag)
                {
                    check[i] = true;
                    c++;
                }
            }
        }
        if(c)
        {
            cout << c << endl;
            for(int i = 1; i <= n; i++)
            {
                if(check[i])cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << m << endl;
        }
    }
    return 0;
}
