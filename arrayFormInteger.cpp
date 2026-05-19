#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arrayFromInteger(vector<int> num, int k)
{
    vector<int> ans;
    int i = num.size() - 1;
    int sum = 0, carry = 0;

    while (i >= 0 || k > 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum = sum + num[i--];
        sum = sum + k % 10;

        ans.push_back(sum % 10);
        carry = sum / 10;
        k = k / 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> num = {1, 2, 3, 0, 0};
    int k = {34};
    vector<int> res = arrayFromInteger(num, k);
    for (auto it : res)
    {
        cout << it << " ";
    }
}