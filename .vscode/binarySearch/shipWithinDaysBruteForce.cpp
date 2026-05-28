#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMax(vector<int> &weights)
{ //TLE
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
    for (int capcity = start; capcity <= end; capcity++)
    {
        if (check(weights, days, capcity))
        {
            return capcity;
        }
    }
    return -1;
}
int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;

    cout << "Minimum capacity: "
         << shipWithinDays(weights, days);
}
