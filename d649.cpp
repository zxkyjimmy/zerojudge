#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)break;
        for(int i = 1; i <= n; i++)
        {
            for(int j = n; j > 0; j--)
            {
                if(j > i)cout << '_';
                else cout << '+';
            }
            cout << endl;
        }
    }
    return 0;
}
