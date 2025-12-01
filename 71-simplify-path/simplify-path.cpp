class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string token = "";
        
        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                
                if (token == "" || token == ".") {
                }
                else if (token == "..") {
                    if (!st.empty())
                        st.pop_back();
                }
                else {
                    st.push_back(token);
                }
                
                token = "";
            }
            else {
                token += path[i];
            }
        }

        if (st.empty()) return "/";

        string result = "";
        for (string &folder : st) {
            result += "/" + folder;
        }

        return result;
    }
};
