#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
string arr[100000];
int main()
{
    string word;
    while(cin >> word)
    {
        bool check = true;
        int n = word.size();
        stack<int>s;
        for(int i = 1; i*i <= n; i++)
        {
            if(n%i)continue;
            int q = n/i;
            if(q != i)s.push(q);
            for(int j = 0; j < q; j++)
            {
                arr[j] = "";
                for(int k = 0; k < i; k++)
                {
                    arr[j] += word[j*i+k];
                }
            }
            sort(arr, arr+q);
            string result = "";
            for(int j = 0; j < q; j++)
            {
                result += arr[j];
            }
            if(result != word)
            {
                cout << result << endl;
                check = false;
            }
        }
        while(!s.empty())
        {
            int i = s.top();
            s.pop();
            int q = n/i;
            for(int j = 0; j < q; j++)
            {
                arr[j] = "";
                for(int k = 0; k < i; k++)
                {
                    arr[j] += word[j*i+k];
                }
            }
            sort(arr, arr+q);
            string result = "";
            for(int j = 0; j < q; j++)
            {
                result += arr[j];
            }
            if(result != word)
            {
                cout << result << endl;
                check = false;
            }
        }
        if(check)cout << "bomb!" << endl;
    }
    return 0;
}
