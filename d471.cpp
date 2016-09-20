#include <iostream>
using namespace std;
int n;
char str[20];
void BT(int i)
{
    if(i == 0)
    {
        str[n] = '\0';
        cout << str << endl;
    }
    else
    {
        str[n-i] = '0';
        BT(i-1);
        str[n-i] = '1';
        BT(i-1);
    }
}
int main()
{
    while(cin >> n)
    {
        BT(n);
    }
    return 0;
}
