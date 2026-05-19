#include <iostream>
using namespace std;

//power of two,three,four in leetcode 
bool powerOfTwo(int n)
{
    if(n<=0) return false;
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    return n == 1;
}
int main()
{
    int n;
    cout << powerOfTwo(32);
}