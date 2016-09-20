#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int x, y, w, n, e, s, a, data, f, g;
    while(cin >> x >> y)
    {
        int map[520][520] = {0};
        bool visited[520][520] = {false};
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < y; j++)
            {
                cin >> map[i][j];
            }
        }
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < y; j++)
            {
                if(map[i][j] && !visited[i][j])
                {
                    w = y;
                    n = x;
                    e = -1;
                    s = -1;
                    a = 0;
                    data = i << 10 | j;
                    stack<int> S;
                    S.push(data);
                    while(!S.empty())
                    {
                        data = S.top();
                        S.pop();
                        if(data < 0)continue;
                        f = data >> 10;
                        g = data & 1023;
                        if(f >= x || g >= y)continue;
                        if(map[f][g] && !visited[f][g])
                        {
                            visited[f][g] = true;
                            w = min(g, w);
                            n = min(f, n);
                            e = max(g, e);
                            s = max(f, s);
                            a++;
                            S.push((f-1) << 10 | g);
                            S.push((f+1) << 10 | g);
                            S.push(f << 10 | (g-1));
                            S.push(f << 10 | (g+1));
                        }
                    }
                    cout << w << " " << n << " " << e << " " << s << " " << a << endl;
                }
            }
        }
    }
    return 0;
}
