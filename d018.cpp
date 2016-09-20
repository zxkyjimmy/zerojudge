#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int n;
    char c;
    string str;
    stringstream ss;
    double result, data;
    while(getline(cin, str))
    {
        result = 0.0;
        ss.str("");
        ss.clear();
        ss << str;
        while(ss >> n >> c >> data)
        {
            if(n&1)
            {
                result += data;
            }
            else
            {
                result -= data;
            }
        }
        cout << result << endl;
    }
    return 0;
}
