#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMax(vector<int> &weights)
{ //time complexity-> (nlogn)
    int maxi = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        maxi = max(maxi, weights[i]);
    }
    return maxi;
}
int findSum(vector<int> &weights)
{
    int sum = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        sum = sum + weights[i];
    }
    return sum;
}
bool check(vector<int> &weights, int days, int capcity)
{
    int currentLoad = 0;
    int dayCount = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        if (weights[i] <= capcity - currentLoad)
        {
            currentLoad += weights[i];
        }
        else
        {
            currentLoad = weights[i];
            dayCount++;
        }
        if (dayCount > days)
        {
            return false;
        }
    }
    return true;
}
int shipWithinDays(vector<int> &weights, int days)
{

    int start = findMax(weights);
    int end = findSum(weights);
    int ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (check(weights, days, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> weights = {3, 2, 2, 4, 1, 4};
    int days = 3;

    cout << "Minimum capacity: "
         << shipWithinDays(weights, days);
}
