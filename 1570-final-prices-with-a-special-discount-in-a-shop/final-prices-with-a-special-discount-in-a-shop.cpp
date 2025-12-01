class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> result;
        for(int i = prices.size() - 1; i> 0; i--){
            st.push(prices[i]);
        }

        for(int i = 0; i<prices.size(); i++){
            stack<int> temp = st;
            while(!temp.empty()){
                if(temp.top() <= prices[i]){
                    break;
                }
                temp.pop();
            }
            st.pop();
            result.push_back(temp.empty() ? prices[i]: prices[i] - temp.top());
        }
        return result;
    }
};