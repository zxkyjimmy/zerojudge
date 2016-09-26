#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        int result = 1, base = a%10007;
        for(int i = 0; i < 32; i++)
        {
            if(1 << i & b)
            {
                result *= base;
                result %= 10007;
            }
            base *= base;
            base %= 10007;
        }
        cout << result << endl;
    }
    return 0;
}
