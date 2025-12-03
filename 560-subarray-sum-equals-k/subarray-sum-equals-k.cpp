class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        myMap[0] = 1;
        int total = 0;
        int counter = 0;
        for(int i = 0; i<nums.size();i++){
            total+=nums[i];
            int required = total - k;
            if(myMap.find(required)!=myMap.end()){
                counter+=myMap[required];
            }
            myMap[total]++;
        }
        return counter;
    }
};