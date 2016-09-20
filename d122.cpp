#include <iostream>
using namespace std;
int main()
{
    long long n, base, result;
    while(cin >> n)
    {
        base = 5;
        result = 0;
        while(base <= n)
        {
            result += n / base;
            base *= 5;
        }
        cout << result << endl;
    }
    return 0;
}
