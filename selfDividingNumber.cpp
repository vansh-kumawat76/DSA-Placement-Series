#include <iostream>
#include <vector>
using namespace std;

bool isSelfDividing(int n)
{
    int num = n;
    while (n)
    {
        if (n % 10 == 0)
            return false;
        if (num % (n % 10) != 0)
            return false;
        n = n / 10;
    }
    return true;
}

vector<int> selfDividing(int left, int right)
{
    vector<int> ans;
    for (int i = left; i <= right; i++)
    {
        if (isSelfDividing(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    int left = 1, right = 22;
    vector<int> ans = selfDividing(left, right);

    for (auto res : ans)
    {
        cout<<res << " ";
    }
}