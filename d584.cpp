#include <iostream>
using namespace std;
int main()
{
    int ch, lv, point;
    while(cin >> ch >> lv)
    {
        point = 0;
        if(ch != 0)
        {
            if(ch == 2)
            {
                if(lv >= 8)
                {
                    point += (lv-8)*3+1;
                }
            }
            else
            {
                if(lv >= 10)
                {
                    point += (lv-10)*3+1;
                }
            }
            if(lv >= 30)point++;
            if(lv >= 70)point++;
            if(lv >=120)point += 3;
        }
        cout << point << endl;
    }
    return 0;
}
