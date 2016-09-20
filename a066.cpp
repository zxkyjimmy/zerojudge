#include <iostream>
using namespace std;
int main()
{
    int h, m;
    while(cin >> h >> m)
    {
        cout << (((990+h*60+m)%1440)>=570?"Off School":"At School") << endl;
    }
    return 0;
}
