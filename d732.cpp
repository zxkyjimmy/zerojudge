#include <iostream>
using namespace std;
int main()
{
    bool check;
    int n, k, arr[100001], l, r, m, quest;
    while(cin >> n >> k)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < k; i++)
        {
            cin >> quest;
            l = 0;
            r = n;
            check = false;
            while(l < r)
            {
                m = (l+r)/2;
                if(arr[m] == quest)
                {
                    cout << m+1 << endl;
                    check = true;
                    break;
                }
                else if(arr[m] < quest)
                {
                    l = m+1;
                }
                else
                {
                    r = m;
                }
            }
            if(!check)cout << 0 << endl;
        }
    }
    return 0;
}
