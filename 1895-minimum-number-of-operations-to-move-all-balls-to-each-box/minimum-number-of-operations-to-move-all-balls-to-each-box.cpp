class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;
        for(int i = 0; i < boxes.length();i++){
            int steps = 0;
            for(int j = 0 ; j<boxes.length();j++){
                if(j == i) continue;
                if(boxes[j] == '1'){
                    int temp = (j - i) <0? i - j: j-i;
                    steps+=temp;
                }
            }
            result.push_back(steps);
        }
        return result;
    }
};