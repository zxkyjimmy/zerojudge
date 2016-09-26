#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b, time;
    while(cin >> n)
    {
        for(int t = 1; t <= n; t++)
        {
            cin >> m;
            int best = 0, aver = 0;
            for(int i = 0; i < m; i++)
            {
                cin >> a >> b;
                time = a*60 + b;
                if(i == 0)best = time;
                best = min(best, time);
                aver += time;
            }
            aver /= m;
            cout << "Track " << t << ":" << endl;
            cout << "Best Lap: " << best/60 << " minute(s) " << best%60 << " second(s)." << endl;
            cout << "Average: "  << aver/60 << " minute(s) " << aver%60 << " second(s)." << endl;
        }
    }
    return 0;
}
