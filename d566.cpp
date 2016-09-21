#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
    int n, c;
    bool status;
    string name, result;
    while(cin >> n)
    {
        map<string, bool> m;
        set<string> s;
        while(n--)
        {
            cin >> name >> result;
            status = (result == "AC");
            m[name] = status;
            if(status)
            {
                s.insert(name);
            }
        }
        c = 0;
        for(auto it = m.begin(); it!= m.end(); it++)
        {
            if(it->second)
            {
                c++;
            }
        }
        cout << c*100/s.size() << "%" << endl;
    }
    return 0;
}
