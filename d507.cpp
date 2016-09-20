#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    unsigned int a[3], l, r;
    while(cin >> a[0] >> a[1] >> a[2])
    {
        sort(a, a+3);
        l = a[0]*a[0] + a[1]*a[1];
        r = a[2]*a[2];
        if(l == r)
        {
            cout << "right triangle" << endl;
        }
        else if(l < r)
        {
            cout << "obtuse triangle" << endl;
        }
        else
        {
            cout << "acute triangle" << endl;
        }
    }
    return 0;
}
