#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)cout << (((b-(b&1))-(a+(a&1)))>>1)+1 << endl;
    return 0;
}
