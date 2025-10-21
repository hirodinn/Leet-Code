#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto &word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end()); // sort letters
            mp[sortedWord].push_back(word); // group by sorted string
        }

        vector<vector<string>> result;
        for (auto &pair : mp) {
            result.push_back(pair.second);
        }

        return result;
    }
};
