#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string sortVowels(string s)
{
    int n = s.size();

    string temp = ""; // store vowels form the string s

    for (int i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
        {
            temp += s[i];
        }
    }
    sort(temp.begin(), temp.end());

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
        {
            s[i] = temp[j++];
        }
    }
    return s;
}

int main()
{
    string s = "vanshika";
    cout << "sort vowels string is :" << sortVowels(s);
}