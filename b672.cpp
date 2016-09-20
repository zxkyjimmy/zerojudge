#include <iostream>
using namespace std;
int main()
{
    int n, k, d, a, c;
    string str;
    cin >> n;
    k = 0;
    d = 0;
    a = 0;
    c = 0;
    while(n--)
    {
        cin >> str;
        if(str == "Get_Kill")
        {
            k++;
            c++;
            if(c < 3)cout << "You have slain an enemie." << endl;
            else if(c == 3)cout << "KILLING SPREE!" << endl;
            else if(c == 4)cout << "RAMPAGE~" << endl;
            else if(c == 5)cout << "UNSTOPPABLE!" << endl;
            else if(c == 6)cout << "DOMINATING!" << endl;
            else if(c == 7)cout << "GUALIKE!" << endl;
            else if(c >= 8)cout << "LEGENDARY!" << endl;
        }
        else if(str == "Die")
        {
            d++;
            if(c < 3)cout << "You have been slained." << endl;
            else cout << "SHUTDOWN." << endl;
            c = 0;
        }
        else if(str == "Get_Assist")
        {
            a++;
        }
    }
    cout << k << "/" << d << "/" << a << endl;
    return 0;
}
