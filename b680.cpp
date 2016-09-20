#include <iostream>
#include <algorithm>
using namespace std;
class Player
{
public:
    int number;
    float time;
    bool operator<(Player p)
    {
        if(time == p.time)
        {
            return number < p.number;
        }
        return time < p.time;
    }
};
int main()
{
    int n, m;
    Player player[205];
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> player[i].number >> player[i].time;
        }
        sort(player, player+n);
        m = n/8;
        for(int k = 0; k < m; k++)
        {
            cout << k+1;
            for(int i = 0; i < 8; i++)
            {
                cout << " ";
                if(i == 0)cout << player[6*m+k].number;
                else if(i == 1)cout << player[4*m+k].number;
                else if(i == 2)cout << player[2*m+k].number;
                else if(i == 3)cout << player[k].number;
                else if(i == 4)cout << player[2*m-1-k].number;
                else if(i == 5)cout << player[4*m-1-k].number;
                else if(i == 6)cout << player[6*m-1-k].number;
                else if(i == 7)cout << player[8*m-1-k].number;
            }
            cout << endl;
        }
    }
    return 0;
}
