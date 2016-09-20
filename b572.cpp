#include <iostream>
using namespace std;
int main()
{
    int n, h1, m1, h2, m2, need, remain;
    cin >> n;
    while(n--)
    {
        cin >> h1 >> m1 >> h2 >> m2 >> need;
        remain = (h2-h1)*60+(m2-m1);
        if(remain >= need)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
