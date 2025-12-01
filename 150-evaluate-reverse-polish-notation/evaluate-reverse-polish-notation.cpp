class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s: tokens){
            if(isNumber(s)){
                st.push(stoi(s));
            }else if(s == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a + b);
            }else if(s == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b - a);
            }else if(s == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a * b);
            }else if(s == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }
        }
        return st.top();
    }
    bool isNumber(const string& s) {
    if (s.empty()) return false;

    int start = 0;
    if (s[0] == '-') {
        if(s.length() == 1) return false;
        start = 1;
    }

    if (start == s.size()) return false;

    for (int i = start; i < s.size(); i++) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}


};