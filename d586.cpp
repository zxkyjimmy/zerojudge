#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;
int main()
{
    char int_to_char[28] = " mjqhofawcpnsexdkvgtzblryui";
    char char_to_int[28] = " uzrmatifxopnhwvbslekycqjgd";
    int n, m;
    string str;
    while(cin >> n)
    {
        while(n--)
        {
            cin >> m;
            getline(cin, str);
            bool is_int = false;
            for(uint32_t i = 0; i < str.size(); i++)
            {
                if(isdigit(str[i]))
                {
                    is_int = true;
                    break;
                }
                else if(isalpha(str[i]))
                {
                    break;
                }
            }
            if(is_int)
            {
                int d;
                stringstream ss(str);
                while(ss >> d)
                {
                    cout << int_to_char[d];
                }
                cout << endl;
            }
            else
            {
                char c;
                int result = 0;
                stringstream ss(str);
                while(ss >> c)
                {
                    for(int i = 1; i <= 26; i++)
                    {
                        if(c == char_to_int[i])
                        {
                            result += i;
                        }
                    }
                }
                cout << result << endl;
            }
        }
    }
    return 0;
}
