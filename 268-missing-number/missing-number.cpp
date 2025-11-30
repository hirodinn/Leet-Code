class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> found;
        int miss = -1;
        for(int i : nums){
            found.insert(i);
        }
        for(int i = 0; i<=nums.size();i++){
            if(!(found.find(i)!=found.end())){
                miss = i;
                break;
            }
        }
        return miss;
    }
};