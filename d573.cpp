#include <iostream>
using namespace std;
int main()
{
    int n, m, y, p, arr[100001];
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> m >> p;
            for(int j = 0; j < p; j++)
            {
                cin >> y;
                arr[y] = m;
            }
        }
        cin >> y;
        cout << arr[y] << endl;
    }
    return 0;
}
