#include <iostream>
#include <algorithm>
using namespace std;
class BigNumber
{
public:
    bool negative = false;
    int num[1000] = {0};
    int digit = 1;
    BigNumber() = default;
    BigNumber(string s)
    {
        int offset;
        if(s[0] == '-')
        {
            negative = true;
            digit = s.size()-1;
            offset = 1;
        }
        else
        {
            negative = false;
            digit = s.size();
            offset = 0;
        }
        for(int i = 0; i < digit; i++)
        {
            num[i] = s[digit-i-1+offset]-'0';
        }
        while(num[digit-1]==0 && digit > 1)digit--;
    }
    void print()
    {
        if(negative)cout << "-";
        for(int i = digit-1; i >=0; i--)
        {
            cout << num[i];
        }
        cout << endl;
    }
    bool operator>=(BigNumber b)
    {
        if(digit > b.digit)return true;
        else if(digit < b.digit)return false;
        else
        {
            int d = digit-1;
            while(num[d] == b.num[d] && d > 0)d--;
            return num[d] >= b.num[d];
        }
    }
    BigNumber operator+(BigNumber b)
    {
        BigNumber result;
        int max_digit = max(digit, b.digit);
        for(int i = 0; i < max_digit; i++)
        {
            result.num[i] += num[i] + b.num[i];
            result.num[i+1] += result.num[i] / 10;
            result.num[i] %= 10;
        }
        if(result.num[max_digit] > 0)
        {
            max_digit += 1;
        }
        result.digit = max_digit;
        return result;
    }
    BigNumber operator-(BigNumber b)
    {
        int d = max(digit, b.digit);
        BigNumber result;
        if(*this >= b)
        {
            for(int i = 0; i < d; i++)
            {
                result.num[i] = num[i] - b.num[i];
            }
        }
        else
        {
            for(int i = 0; i < d; i++)
            {
                result.num[i] = b.num[i] - num[i];
            }
            result.negative = true;
        }
        for(int i = 0; i < d; i++)
        {
            if(result.num[i] < 0)
            {
                result.num[i+1] -= 1;
                result.num[i] += 10;
            }
        }
        while(result.num[d-1]==0 && d > 1)
        {
            d -= 1;
        }
        result.digit = d;
        return result;
    }
    BigNumber operator*(BigNumber b)
    {
        BigNumber result;
        for(int i = 0; i < digit; i++)
        {
            for(int j = 0; j < b.digit; j++)
            {
                result.num[i+j] += num[i]*b.num[j];
            }
        }
        int d = digit+b.digit;
        for(int i = 0; i < d; i++)
        {
            result.num[i+1] += result.num[i]/10;
            result.num[i] %= 10;
        }
        if(result.num[d-1] == 0)
        {
            d -= 1;
        }
        result.digit = d;
        return result;
    }
    BigNumber operator*(int b)
    {
        BigNumber result;
        int d = digit;
        for(int i = 0; i < d; i++)
        {
            result.num[i] += num[i]*b;
            result.num[i+1] += result.num[i]/10;
            result.num[i] %= 10;
        }
        while(result.num[d] > 0)
        {
            result.num[d+1] += result.num[d]/10;
            result.num[d] %= 10;
            d += 1;
        }
        result.digit = d;
        return result;
    }
    BigNumber operator/(BigNumber b)
    {
        BigNumber result, tmp = *this;
        int d = max(digit-b.digit+1,1);
        for(int i = d-1; i >= 0; i--)
        {
            BigNumber sub = b;
            for(int j = 0; j < i; j++)
            {
                sub = sub * 10;
            }
            for(int j = 9; j >= 0; j--)
            {
                if(tmp >= sub*j)
                {
                    tmp = tmp - sub*j;
                    result.num[i] = j;
                    break;
                }
            }
        }
        while(result.num[d-1]==0 && d > 1)
        {
            d -= 1;
        }
        result.digit = d;
        return result;
    }
};
int main()
{
    string str1, str2;
    char op;
    while(cin >> str1 >> op >> str2)
    {
        BigNumber a(str1), b(str2);
        if(op == '+')
        {
            (a+b).print();
        }
        else if(op == '-')
        {
            (a-b).print();
        }
        else if(op == '*')
        {
            (a*b).print();
        }
        else if(op == '/')
        {
            (a/b).print();
        }
    }
    return 0;
}
