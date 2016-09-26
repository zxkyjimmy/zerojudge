#include <iostream>
#include <algorithm>
using namespace std;
class cand
{
public:
    char label;
    uint64_t n;
    bool operator< (const cand c)const{return n < c.n;}
};
int main()
{
    cand arr[3];
    while(cin >> arr[0].n >> arr[1].n >> arr[2].n)
    {
        arr[0].label = 'A';
        arr[1].label = 'B';
        arr[2].label = 'C';
        sort(arr, arr+3);
        if(arr[2].n > arr[1].n + arr[0].n)
        {
            cout << arr[2].label << endl;
        }
        else
        {
            cout << arr[1].label << endl;
        }
    }
    return 0;
}
