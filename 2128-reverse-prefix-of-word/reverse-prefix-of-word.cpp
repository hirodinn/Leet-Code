class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result = "";
        bool isOccured = false;
        for(char c: word){
            if(!isOccured){
                result = c + result;
                if(c == ch) isOccured = true;
            }else{
                result+=c;
            }

        }
        return isOccured ? result : word;
    }
};