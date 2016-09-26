#include <iostream>
using namespace std;
int main()
{
    int n, m;
    string brand[20], color[20], key, value;
    while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> brand[i] >> color[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> key >> value;
            if(key == "brand")
            {
                for(int j = 0; j < n; j++)
                {
                    if(value == brand[j])
                    {
                        cout << brand[j] << " " << color[j] << endl;
                    }
                }
            }
            else if(key == "color")
            {
                for(int j = 0; j < n; j++)
                {
                    if(value == color[j])
                    {
                        cout << brand[j] << " " << color[j] << endl;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
