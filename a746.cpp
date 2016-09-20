#include <iostream>
#include <algorithm>
using namespace std;
bool data[600][600];
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        fill(data[0], data[600], false);
        int x, y, next_x, next_y;
        cin >> x >> y;
        data[x][y] = true;
        while(--m)
        {
            cin >> next_x >> next_y;
            if(next_x > x)
            {
                for(int i = x+1; i <= next_x; i++)
                {
                    data[i][y] = true;
                }
            }
            else if(next_x < x)
            {
                for(int i = x-1; i >= next_x; i--)
                {
                    data[i][y] = true;
                }
            }
            else if(next_y > y)
            {
                for(int i = y+1; i <= next_y; i++)
                {
                    data[x][i] = true;
                }
            }
            else if(next_y < y)
            {
                for(int i = y-1; i >= next_y; i--)
                {
                    data[x][i] = true;
                }
            }
            x = next_x;
            y = next_y;
        }
        for(int i = 0; i < n+2; i++)cout << "-";
        cout << endl;
        for(int i = 1; i <= n; i++)
        {
            cout << "|";
            for(int j = 1; j <= n; j++)
            {
                if(data[i][j])cout << "*";
                else cout << " ";
            }
            cout << "|" << endl;
        }
        for(int i = 0; i < n+2; i++)cout << "-";
        cout << endl;
    }
    return 0;
}
