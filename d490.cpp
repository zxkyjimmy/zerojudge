#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        a += a&1;
        b ^= b&1;
        cout << (a+b)*((b-a)/2+1)/2 << endl;
    }
    return 0;
}
