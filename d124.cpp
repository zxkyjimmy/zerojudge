#include <iostream>
using namespace std;
int main()
{
    int sum, start;
    string str;
    while(cin >> str)
    {
        sum = 0;
        start = str[0] == '-' ? 1 : 0;
        for(unsigned int i = start; i < str.size(); i++)
        {
            sum += str[i] - '0';
        }
        if(sum % 3 == 0)cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
