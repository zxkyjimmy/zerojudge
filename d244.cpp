#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> count, num;
    while(cin >> n)
    {
        int i;
        for(i = 0; i < num.size(); i++)
        {
            if(n == num[i])
            {
                count[i]++;
                break;
            }
        }
        if(i == num.size())
        {
            num.push_back(n);
            count.push_back(1);
        }
    }
    for(int i = 0; i < num.size(); i++)
    {
        if(count[i]%3 == 2)
        {
            cout << num[i] << endl;
        }
    }
    return 0;
}
