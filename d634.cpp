#include <iostream>
#include <algorithm>
using namespace std;
string arr[100000];
int main()
{
    int n;
    while(cin >> n)
    {
        getline(cin, arr[0]);
        for(int i = 0; i < n; i++)
        {
            getline(cin, arr[i]);
        }
        sort(arr, arr+n);
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
