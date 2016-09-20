#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, s;
    while(cin >> a >> b >> c)
    {
        s = (a+b+c) >> 1;
        cout << s*(s-a)*(s-b)*(s-c) << endl;
    }
    return 0;
}
