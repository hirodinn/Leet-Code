class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

    unordered_map<char, vector<string>> keypad = {
        {'2', {"a", "b", "c"}}, {'3', {"d", "e", "f"}},
        {'4', {"g", "h", "i"}}, {'5', {"j", "k", "l"}},
        {'6', {"m", "n", "o"}}, {'7', {"p", "q", "r", "s"}},
        {'8', {"t", "u", "v"}}, {'9', {"w", "x", "y", "z"}}
    };

    vector<string> answer = {""}; // start with empty string

    for (char digit : digits) {
        if (keypad.find(digit) == keypad.end()) continue; // skip invalid digits
        vector<string> temp;
        for (auto combination : answer) {
            for (auto letter : keypad[digit]) {
                temp.push_back(combination + letter);
            }
        }
        answer = temp;
    }

    return answer;
    }
};