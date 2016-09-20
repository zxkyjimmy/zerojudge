#include <iostream>
using namespace std;
int main()
{
    int a, b, c, result = 0;
    for(int t = 0; t < 5; t++)
    {
        cin >> a >> b >> c;
        if(abs(a-b) < c && a+b > c)
        {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}
