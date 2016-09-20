#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int d, result;
    string str;
    while(getline(cin, str))
    {
        result = 0;
        stringstream ss(str);
        while(ss >> d)
        {
            result += d;
        }
        cout << result << endl;
    }
    return 0;
}
