#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> digit)
{
    vector<int> res; // create a vector

    int i = digit.size() - 1;
    int sum = 0;

    sum = sum + digit[i--] + 1;
    res.push_back(sum % 10);

    int carry = sum / 10;

    while (i >= 0 || carry)
    {
        sum = carry;

        if (i >= 0) sum = sum + digit[i--];
        res.insert(res.begin(), (sum % 10));

        carry = sum / 10;
    }
    return res;
}
int main()
{
    vector<int> digit = {1, 9, 3, 9};
    vector<int> ans = plusOne(digit);
    for (auto it : ans)
    {
        cout << it;
    }
}