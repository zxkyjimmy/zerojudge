#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, d;
    while(cin >> a >> b >> c >> d)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0)break;
        float detA = a*d - b*c;
        if(detA == 0)
        {
            cout << "cheat!" << endl;
        }
        else
        {
            cout << fixed << setprecision(5);
            cout << d/detA << " " << -b/detA << endl;
            cout << -c/detA << " " << a/detA << endl;
        }
    }
    return 0;
}
