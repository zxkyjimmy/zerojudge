#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while(cin >> a >> b)
    {
        c = 0;
        for(int i = a; i <= b; i++)
        {
            if(i % 400 == 0)
            {
                c++;
            }
            else if(i % 100 != 0 && i % 4 == 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
