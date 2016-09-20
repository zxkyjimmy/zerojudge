#include <iostream>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        for(unsigned int i = 0; i < s.size(); i++)
        {
            for(unsigned int j = 0; j < s.size(); j++)
            {
                cout << s[(i+j)%s.size()];
            }
            cout << endl;
        }
    }
    return 0;
}
