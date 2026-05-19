#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int> nums)
{
    int s = 0, e = nums.size() - 1;

    while (s <= e)
    {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }
    return nums;
}
int main()
{
    vector<int> nums = {11, 27, 3, 42, 50, 6};

    vector<int> ans = reverseArray(nums);
    cout << "reverse array is >>>>>> ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
}