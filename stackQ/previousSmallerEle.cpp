#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> preSmallerEle(vector<int> &arr)
{

    int n = arr.size();
    vector<int> ans(n);

    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 6, 2};
    vector<int> res = preSmallerEle(arr);
    for (auto it : res)
    {
        cout << it << " ";
    }
}