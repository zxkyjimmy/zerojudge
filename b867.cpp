#include <iostream>
#include <stack>
using namespace std;
int main()
{
    bool twice = false;
    string op, key, value;
    stack<bool>s;
    cout << "{";
    while(cin >> op)
    {
        if(op == "insert")
        {
            cin >> key >> value;
            if(twice)cout << ",";
            twice = true;
            cout << key << ":";
            if(value == "newJSONObject")
            {
                cout << "{";
                s.push(twice);
                twice = false;
            }
            else
            {
                cout << value;
            }
        }
        else if(op == "end")
        {
            cout << "}";
            if(!s.empty())
            {
                twice = s.top();
                s.pop();
            }
        }
    }
    return 0;
}
