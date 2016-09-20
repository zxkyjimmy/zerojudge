#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    int t;
    cin >> t;
    getline(cin, str);
    while(t--)
    {
        getline(cin, str);
        stringstream ss(str);
        int c = 0;
        bool flag = false;
        while(ss >> str)
        {
            if(str == "chi")c++;
            else c--;
            if(c < 0)flag = true;
        }
        if(flag)
        {
            if(c > 0)cout << "chi pu tao bu tu pu tao pi, bu chi pu tao dao tu pu tao pi" << endl;
            else cout << "bu chi pu tao dao tu pu tao pi" << endl;
        }
        else
        {
            if(c > 0)cout << "chi pu tao bu tu pu tao pi" << endl;
            else cout << "chi pu tao tu pu tao pi" << endl;
        }
    }
    return 0;
}
