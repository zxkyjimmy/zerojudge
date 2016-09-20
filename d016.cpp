#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int64_t a, b;
    string str, data;
    while(getline(cin, str))
    {
        stringstream ss, ns;
        stack<int64_t> s;
        ss.clear();
        ss << str;
        while(ss >> data)
        {
            if(data == "+")
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                a += b;
                s.push(a);
            }
            else if(data == "-")
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                a -= b;
                s.push(a);
            }
            else if(data == "*")
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                a *= b;
                s.push(a);
            }
            else if(data == "/")
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                a /= b;
                s.push(a);
            }
            else if(data == "%")
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                a %= b;
                s.push(a);
            }
            else
            {
                ns.clear();
                ns << data;
                ns >> a;
                s.push(a);
            }
        }
        a = s.top();
        cout << a << endl;
    }
    return 0;
}
