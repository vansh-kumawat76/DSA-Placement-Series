#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// how to identify binary search problem
// Binary search on answer
// Binary search on search space
// minimize & maximize
// Binary search on range
// time complexity -> (nlogn)

bool checkSpeed(vector<int> &piles, int k, int h)
{
    int hoursOfKoko = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        hoursOfKoko += ceil((double)piles[i] / k);

        if (hoursOfKoko > h)
        {
            return false;
        }
    }
    return true;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int maxi = 0, n = piles.size();

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, piles[i]);
    }
    int ans = 0;

    int start = 1, end = maxi;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (checkSpeed(piles, mid, h))
        {
            /*Checking if koko can eat bananas without getting caught at an
            eating speed of "mid" that basically means k*/

            ans = mid;
            end = mid - 1;
        }
        else
        {
            /*you have to increase the eating speed because at "mid" eating speed, koko gets caught*/
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = {8};
    int res = minEatingSpeed(piles, h);
    cout << "Minimum Eating Speed is :" << res;
}