#include <iostream>
using namespace std;
int main()
{
    bool flag;
    int t, n, m, arr[105], median, last;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i*m+j];
            }
        }
        last = n*m - 1;
        median = n*m/2;
        flag = true;
        for(int i = 0; i < median && flag; i++)
        {
            if(arr[i] != arr[last-i])
            {
                flag = false;
            }
        }
        if(flag)cout << "go forward" << endl;
        else cout << "keep defending" << endl;
    }
    return 0;
}
