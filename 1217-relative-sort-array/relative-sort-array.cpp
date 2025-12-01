class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> notIn2;
        int p1 = 0;
        for(int i = 0 ; i< arr2.size();i++){
            for(int j = p1 ; j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    swap(arr1[p1],arr1[j]);
                    p1++;
                }
            }
        }
        for(int i = p1 ; i<arr1.size();i++){
            notIn2.push_back(arr1[i]);
        }
        sort(notIn2.begin(), notIn2.end());
        for(int i = 0; i< notIn2.size();i++){
            arr1[p1] = notIn2[i];
            p1++;
        }
        return arr1;
    }
};