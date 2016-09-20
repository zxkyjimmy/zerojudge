#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        cout << (n>=6)*590+(n>=12)*200+(n>=18)*100-(n>=60)*491 << endl;
    }
    return 0;
}
