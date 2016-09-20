#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int n, result;
    string str;
    stringstream ss, ns;
    while(getline(cin, str))
    {
        result = 0;
        ss.str("");
        ss.clear();
        ss << str;
        while(ss >> str)
        {
            bool flag = true;
            for(unsigned int i = 0; i < str.size(); i++)
            {
                if(!isdigit(str[i]))
                {
                    flag = false;
                }
            }
            if(flag)
            {
                ns.str("");
                ns.clear();
                ns << str;
                ns >> n;
                result += n;
            }
        }
        cout << result << endl;
    }
    return 0;
}
