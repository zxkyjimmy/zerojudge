#include <iostream>
using namespace std;
int a[105][105], n;
void dfs(int x, int y)
{
    if(x > 0)
    {
        if(a[x][y]+1 < a[x-1][y])
        {
            a[x-1][y] = a[x][y]+1;
            dfs(x-1, y);
        }
    }
    if(x+1 < n)
    {
        if(a[x][y]+1 < a[x+1][y])
        {
            a[x+1][y] = a[x][y]+1;
            dfs(x+1, y);
        }
    }
    if(y > 0)
    {
        if(a[x][y]+1 < a[x][y-1])
        {
            a[x][y-1] = a[x][y]+1;
            dfs(x, y-1);
        }
    }
    if(y+1 < n)
    {
        if(a[x][y]+1 < a[x][y+1])
        {
            a[x][y+1] = a[x][y]+1;
            dfs(x, y+1);
        }
    }
}
int main()
{
    char c;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> c;
                if(c == '#')
                {
                    a[i][j] = -1;
                }
                else
                {
                    a[i][j] = 1000000;
                }
            }
        }
        a[1][1] = 1;
        dfs(1,1);
        if(a[n-2][n-2] == 1000000)
        {
            cout << "No solution!" << endl;
        }
        else
        {
            cout << a[n-2][n-2] << endl;
        }
    }
    return 0;
}
