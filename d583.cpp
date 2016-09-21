#include <iostream>
using namespace std;
int main()
{
    int n, a;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)cin >> a;
        for(int i = 1; i <= n; i++)cout << i << ' ';
        cout << endl;
    }
    return 0;
}
