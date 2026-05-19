#include <iostream>
#include <vector>
using namespace std;

int main()
{ // arrya of square [1,2,3,4]

    int n = 1234;
    vector<int> res;

    while (n)
    {
        res.push_back((n % 10) * (n % 10));
        n = n / 10;
    }
    int i = 0, j = res.size() - 1;
    while (i < j)
    {
        swap(res[i], res[j]);
        i++;
        j--;
    }
    for (auto it : res)
    {
        cout << it << " ";
    }
}