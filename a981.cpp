#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[35];
bool flag;
void BT(int p, int sum, unsigned int use)
{
    if(sum > m)return ;
    if(sum == m)
    {
        flag = true;
        for(int i = 0; i < p; i++)
        {
            if(use & (1 << i))
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
        return ;
    }
    if(p >= n)return ;
    BT(p+1, sum+arr[p], use|(1<<p));
    BT(p+1, sum, use);
}
int main()
{
    while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        flag = false;
        BT(0,0,0);
        if(!flag)cout << -1 << endl;
    }
    return 0;
}
