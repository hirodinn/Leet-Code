class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int > result;
        stack<int> st;
        for(int i = nums2.size() - 1; i>=0; i--){
            st.push(nums2[i]);
        }
        for(int i = 0; i<nums1.size(); i++){
            stack<int> mySt = st;
            while(!mySt.empty()){
                if(mySt.top() == nums1[i]) break;
                mySt.pop();
            }
            if(mySt.empty()) {
                result.push_back(-1);
                continue;
            }
            while(!mySt.empty()){
                if(mySt.top() > nums1[i]){
                    result.push_back(mySt.top());
                    break;
                }
                mySt.pop();
            }
            if(mySt.empty()) {
                result.push_back(-1);
                continue;
            }
        }
        return result;
    }
};