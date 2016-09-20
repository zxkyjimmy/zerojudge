#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    while(getline(cin, str))
    {
        int n = 0, a[55] = {0}, b[55];
        stringstream ss(str);
        while(ss >> b[n])n++;
        if(b[0] == -1)continue;
        for(int i = 0; i < n; i++)
        {
            int site = 0;
            while(b[i])
            {
                if(a[site++] == 0)b[i]--;
            }
            while(a[site] != 0)site++;
            a[site] = i+1;
        }
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
