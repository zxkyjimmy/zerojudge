#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str;
    while(cin >> str)
    {
        int offset = (str[0] == '-');
        int n = str[offset] - '0';
        if(2+offset < str.size())n = n*10 + str[2+offset] - '0';
        else n *= 10;
        if(3+offset < str.size())n = n*10 + str[3+offset] - '0';
        else n *= 10;
        if(4+offset < str.size())n = n*10 + str[4+offset] - '0';
        else n *= 10;
        int q = n/10;
        int r = n%10;
        if(r > 4)q++;
        if(offset && q!=0)cout << "-";
        cout << q/100 << "." << setw(2) << setfill('0') << q%100 << endl;
    }
    return 0;
}
