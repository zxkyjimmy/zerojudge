#include <iostream>
using namespace std;
char str[10000000];
int main()
{
    int n, times, m;
    char c, tmp;
    while(cin >> n)
    {
        cin >> str;
        m = 0;
        c = '\0';
        for(int i = 0; i < n; i++)
        {
            tmp = c;
            c = str[i];
            if(c != tmp)
            {
                m += 2;
            }
        }
        if(m >= n)
        {
            cout << str << endl;
        }
        else
        {
            times = 1;
            c = str[0];
            for(int i = 1; i <= n; i++)
            {
                tmp = c;
                c = str[i];
                if(c == tmp)times++;
                else
                {
                    cout << times << tmp;
                    times = 1;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
