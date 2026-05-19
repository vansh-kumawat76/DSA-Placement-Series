#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{

    // Create a map:
    // key = sorted word
    // value = all words having the same sorted form
    map<string, vector<string>> mp;

    // Traverse each string one by one
    for (auto s : strs)
    {

        // Create a copy of the original string
        // Example:
        // s = "eat"
        // key = "eat"
        string key = s;

        // Sort the copied string
        // "eat" -> "aet"
        // "tea" -> "aet"
        // "ate" -> "aet"
        sort(key.begin(), key.end());

        // Store original word in the map
        // Words with the same sorted key go into the same group
        // Example:
        // mp["aet"] = {"eat","tea","ate"}
        mp[key].push_back(s);
    }

    // Store final answer
    vector<vector<string>> res;

    // Traverse through the map
    for (auto it : mp)
    {

        // it.second contains vector<string>
        // Example:
        // {"eat","tea","ate"}
        res.push_back(it.second);
    }

    // Return grouped anagrams
    return res;
}

void printvectorstring(vector<vector<string>> strs)
{
    // Print each group
    for (auto it : strs)
    {
        cout << "[ ";

        // Print words inside each group
        for (auto i : it)
        {
            cout << i << " ";
        }

        cout << "]" << endl;
    }
}

int main()
{

    // Input strings
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    // Call function and print result
    printvectorstring(groupAnagrams(strs));
}