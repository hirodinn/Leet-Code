class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;
        int column = -1;
        for(int i = temp.size() - 1; i>=0;i--){
            column++;
            for(int j = 0; j<temp.size();j++){
                matrix[j][column] = temp[i][j];
            }
        }
    }
};