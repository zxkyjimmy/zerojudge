#include <iostream>
using namespace std;
int main()
{
    int n, c, l, r, prefix, suffix, arr[100000];
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)cin >> arr[i];
        c = 1;
        l = 0;
        r = n-1;
        prefix = 0;
        suffix = 0;
        while(l < n && r >= 0)
        {
            if(prefix < suffix)
            {
                prefix += arr[l++];
            }
            else
            {
                suffix += arr[r--];
            }
            if(prefix == suffix)c++;
        }
        cout << c << endl;
    }
    return 0;
}
