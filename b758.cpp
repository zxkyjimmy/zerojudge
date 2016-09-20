#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int h, m;
    while(cin >> h >> m)
    {
        h += 2;
        m += 30;
        h += m/60;
        m %= 60;
        h %= 24;
        cout << setw(2) << setfill('0') << h << ":" << setw(2) << m << endl;
    }
    return 0;
}
