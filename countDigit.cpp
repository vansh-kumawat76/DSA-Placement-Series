#include <iostream>
using namespace std;

int countDigit(int n)
{
    int cnt = 0, temp = n;
    while (n)
    {
        int digit = n % 10;
        if (temp % digit == 0)
        {
            cnt++;
        }
        n = n / 10;
    }
    return cnt;
}
int main()
{
    int n;
    cout << "digit count is :" << countDigit(1248);
}