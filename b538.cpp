#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if(b) while((a %= b) && (b %= a));
	return a + b;
}
int main()
{
    char op;
    bool negative;
    int a, b, c, d, n, m, g;
    while(cin >> a >> b >> c >> d >> op)
    {
        if(op == '+')
        {
            n = a*d+c*b;
            m = b*d;
        }
        else if(op == '-')
        {
            n = a*d-c*b;
            m = b*d;
        }
        else if(op == '*')
        {
            n = a*c;
            m = b*d;
        }
        else if(op == '/')
        {
            n = a*d;
            m = b*c;
        }
        else
        {
            n = 0;
            m = 0;
        }
        g = gcd(n, m);
        n = n/g;
        m = m/g;
        negative = false;
        if(n < 0)
        {
            negative ^= true;
            n = -n;
        }
        if(m < 0)
        {
            negative ^= true;
            m = -m;
        }
        if(n == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if(negative)cout << "-";
            cout << n;
            if(m > 1)cout << "/" << m;
            cout << endl;
        }
    }
    return 0;
}
