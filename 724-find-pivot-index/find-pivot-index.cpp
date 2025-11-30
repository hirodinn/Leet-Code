class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1;
        for(int i = 0; i< nums.size();i++){
            int sumBefore = 0;
            int sumAfter = 0;
            for(int j = i-1; j>=0;j--){
                sumBefore+=nums[j];
            }
            for(int j = i+1; j<nums.size();j++){
                sumAfter+=nums[j];
            }
            if(sumBefore == sumAfter){
                index=i;
                break;
            }
        }
        return index;
    }
};