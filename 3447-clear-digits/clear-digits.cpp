class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char ch: s){
            if(isdigit(ch)){
                if(!st.empty()) st.pop();
            }else{
                st.push(ch);
            }
        }
        string result = "";
        while(!st.empty()){
            result = st.top() + result;
            st.pop();
        }
        return result;
    }
    bool isNumber(const string& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

};