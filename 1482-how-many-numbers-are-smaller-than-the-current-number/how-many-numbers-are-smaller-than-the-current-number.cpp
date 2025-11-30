class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
  vector<int> unsorted = nums;
  vector<int> result;
  sort(nums.begin(), nums.end());
  unordered_map<int, vector<int>> myMap;
  for (int i = 0; i < nums.size(); i++) {
    if (myMap.find(nums[i]) != myMap.end()) {
      myMap[nums[i]][1]++;
    } else {
      myMap[nums[i]] = {i, 1};
    }
  }

  for (int i = 0; i < nums.size(); i++) {
    int temp = myMap[unsorted[i]][0];
    result.push_back(temp);
  }
  return result;
}
};