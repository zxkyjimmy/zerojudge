#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    if(m)while((m %= n) && (n %= m));
    return n+m;
}
int main()
{
    int x1, x2, y1, y2, a, b, c, d, g;
    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        a = (x2-x1)*(x2-x1);
        b = y2-y1;
        c = -2*x1*b;
        d = b*x1*x1 + y1*a;
        g = gcd(a, gcd(b, gcd(c, d)));
        if(g<0)g = -g;
        a /= g;
        b /= g;
        c /= g;
        d /= g;
        cout << a << "y = " << b << "x^2 + " << c << "x + " << d << endl;
    }
    return 0;
}
