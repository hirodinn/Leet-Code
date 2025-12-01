class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        for(char ch : s){
            if(ch == '#'){
               if(!st1.empty()) st1.pop();
            }else{
                st1.push(ch);
            }
        }
        string string1 = "";
        while(!st1.empty()){
            string1+=st1.top();
            st1.pop();
        }
        stack<char> st2;
        for(char ch : t){
            if(ch == '#'){
                if(!st2.empty()) st2.pop();
            }else{
                st2.push(ch);
            }
        }
        string string2 = "";
        while(!st2.empty()){
            string2+=st2.top();
            st2.pop();
        }
        return string1 == string2;
    }
};