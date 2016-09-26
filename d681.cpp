#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    while(getline(cin, str))
    {
        bool status = true, op_status = false;
        int result = 0;
        string data;
        stringstream ss(str);
        while(ss >> data)
        {
            if(status)
            {
                cout << data;
                if(op_status)
                {
                    result &= stoi(data, nullptr, 2);
                }
                else
                {
                    result |= stoi(data, nullptr, 2);
                }
                status = false;
            }
            else
            {
                if(data == "and")
                {
                    cout << "&&";
                    op_status = true;
                }
                else
                {
                    cout << "||";
                    op_status = false;
                }
                status = true;
            }
        }
        cout << " = ";
        for(int i = 0; i < 5; i++)
        {
            if(result & 16 >> i)cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
    return 0;
}
