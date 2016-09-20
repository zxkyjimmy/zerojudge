#include <iostream>
using namespace std;
int main()
{
    int n, m, a[10000], b[10000];
    cin >> n >> m;
    while(n--)
    {
        for(int i = 0; i < m; i++)cin >> a[i];
        for(int i = 0; i < m; i++)cin >> b[i];
        int i = 0, j = 0, c = 0;
        while(i < m && j < m)
        {
            if(a[i] == b[j])
            {
                i++;
                j++;
                c++;
            }
            else if(a[i] < b[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
