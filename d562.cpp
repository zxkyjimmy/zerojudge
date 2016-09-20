#include <iostream>
using namespace std;
int main()
{
    int n, l, r, num[100];
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        l = 0;
        r = n-1;
        while(l <= r)
        {
            for(int i = l; i <= r; i++)
            {
                cout << num[i] << " ";
            }
            cout << endl;
            l++;
            if(l <= r)
            {
                for(int i = r; i >= l; i--)
                {
                    cout << num[i] << " ";
                }
                cout << endl;
                r--;
            }
        }
    }
    return 0;
}
