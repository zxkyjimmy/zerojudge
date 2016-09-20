#include <iostream>
using namespace std;
int main()
{
    int i;
    while(cin >> i) cout << (i&1?"Odd":"Even") << endl;
    return 0;
}
