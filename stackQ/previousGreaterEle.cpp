#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> previousGreaterEle(vector<int> &arr)
{
    int n = arr.size();
    vector<int> res(n);

    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();

        st.push(arr[i]);
    }
    return res;
}
int main()
{
    vector<int> arr = {10, 4, 2, 20, 40, 12, 30};
    vector<int> ans = previousGreaterEle(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}