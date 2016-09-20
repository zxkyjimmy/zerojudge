#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n&3)cout << "fat" << endl;
        else cout << "egg" << endl;
    }
    return 0;
}
