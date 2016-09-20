#include <iostream>
using namespace std;
int main()
{
    int n, m, L, R, arrL[105], arrR[105];
    while(cin >> n >> m)
    {
        for(int i = 0; i < m; i++)
        {
            arrL[i] = 0;
            arrR[i] = 2147483647;
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> L >> R;
                arrL[j] = max(L, arrL[j]);
                arrR[j] = min(R, arrR[j]);
            }
        }
        bool flag = true;
        for(int i = 0; i < m && flag; i++)
        {
            if(arrL[i] > arrR[i])
            {
                flag = false;
            }
        }
        if(flag)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
