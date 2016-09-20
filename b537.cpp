#include <iostream>
using namespace std;
uint64_t f(int a, int b)
{
    if(a == b)return 1;
    if(a > b)return f(a-b, b)<<1;
    return f(b, a)+1;
}
int main()
{
    int a, b;
    while(cin >> a >> b)cout << f(a, b) << endl;
    return 0;
}
