class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> prefix(n + 1,1);
        for(int i = 0 ; i< n;i++){
            prefix[i+1] = prefix[i] * nums[i]; 
        }
        vector<int> suffix(n + 1,1);
        for(int i = n - 1; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i];
        }
        for(int i = 0;i<n;i++){
            ans.push_back(prefix[i] * suffix[i+1]);
        }
        return ans;
    }
};