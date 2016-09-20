#include <iostream>
#include <algorithm>
using namespace std;
int n, arr[105];
bool need[105] = {false};
void BT(int p, int m)
{
    if(m == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(need[i])
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
        return;
    }
    if(p >= n)return;
    need[p] = true;
    BT(p+1, m-1);
    need[p] = false;
    BT(p+1, m);
}
int main()
{
    int m;
    while(cin >> n)
    {
        if(n == 0)break;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        sort(arr, arr+n);
        BT(0, m);
        cout << endl;
    }
    return 0;
}
