#include <iostream>
using namespace std;
int main()
{
    int n, s;
    while(cin >> n)
    {
        s = 0;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                s += i;
            }
        }
        if(s > n)cout << "�ռ�" << endl;
        else if(s == n)cout << "������" << endl;
        else if(s < n)cout << "����" << endl;
    }
    return 0;
}
