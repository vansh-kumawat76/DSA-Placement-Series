#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// brute force code -> Time Limit Exceed

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
    for (int k = 1; k <= maxi; k++)
    {
        if (checkSpeed(piles, k, h))
        {
            ans = k;
            break;
        }
    }
    return ans;
}
int main()
{
    // bruteForce
    vector<int> piles = {30, 11, 23, 4, 20};
    int h = {5};

    int ans = minEatingSpeed(piles, h);
    cout << "Minimum Eating Speed is : " << ans;
}