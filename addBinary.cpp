#include <iostream>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.length() - 1;
    int j = b.length() - 1;

    int sum = 0, carry = 0;

    string res = "";

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum = sum + a[i--] - '0';
        if (j >= 0)
            sum = sum + b[j--] - '0';

        res = char((sum % 2) + '0') + res;
        carry = sum / 2;
    }
    return res;
}

int main()
{
    string a = "10110";
    string b = "11001";

    cout << addBinary(a, b);
}