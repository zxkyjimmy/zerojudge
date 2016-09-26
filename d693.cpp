#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b)while((a %= b) && (b %= a));
    return a+b;
}
int lcm(int a, int b)
{
    return (a/gcd(a, b))*b;
}
int main()
{
    int n, d, result;
    while(cin >> n)
    {
        if(n == 0)break;
        cin >> result;
        for(int i = 1; i < n; i++)
        {
            cin >> d;
            result = lcm(result, d);
        }
        cout << result << endl;
    }
    return 0;
}
