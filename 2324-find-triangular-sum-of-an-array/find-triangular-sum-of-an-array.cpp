class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int sum = 0;
        vector<int> toLoop = nums;
        for(int i = 0; i< nums.size();i++){
            vector<int> vec;
            for(int j = 0 ;j < toLoop.size() - 1;j++){
                vec.push_back((toLoop[j] + toLoop[j + 1]) % 10);
            }
            toLoop = vec;
        }
            return toLoop[0];
    }
};