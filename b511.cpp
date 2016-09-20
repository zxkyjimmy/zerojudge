#include <iostream>
using namespace std;
int n, d[10], ans[10];
void BT(int p, int remain)
{
    if(p == n && remain == 0)
    {
        cout << "(" << ans[0];
        for(int i = 1; i < n; i++)
        {
            cout << "," << ans[i];
        }
        cout << ")" << endl;
        return;
    }
    if(p >= n)return;
    int m = remain/d[p];
    for(int i = 0; i <= m; i++)
    {
        ans[p] = i;
        BT(p+1, remain-d[p]*i);
    }
}
int main()
{
    int r;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        cin >> r;
        BT(0, r);
    }
    return 0;
}
