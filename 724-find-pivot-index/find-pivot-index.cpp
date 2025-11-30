class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(0);
        for(int i = 0; i < nums.size();i++){
            prefix.push_back(prefix[i] + nums[i]);
        }

        vector<int> suffix(nums.size() + 1, 0);
        for(int i = nums.size() - 1 ; i>=0;i--){
            suffix[i] = suffix[i+1] + nums[i];
        }
        for(int i = 0; i<nums.size();i++){
            if(suffix[i + 1]==prefix[i]){
                return i;
            }
        }
        return -1;
    }
};