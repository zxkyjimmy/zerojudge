#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    long long f, a, b;
    while(cin >> f)
    {
        f = (f-32)*5000;
        a = f/9;
        b = f%9;
        if(b > 4)a++;
        cout << a/1000 << "." << setw(3) << setfill('0') << abs(a%1000) << endl;
    }
    return 0;
}
