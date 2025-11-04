class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    bool eachRow = false;
  for (int i = 0; i < 9; i++) {
    unordered_set<int> myset;
    for (int j = 0; j < 9; j++) {
              if (board[i][j] == '.') continue;
      eachRow = eachRow || (myset.find(board[i][j]) != myset.end());
      myset.insert(board[i][j]);
    }
  }
  bool eachColumn = false;
  for (int i = 0; i < 9; i++) {
    unordered_set<int> myset;
    for (int j = 0; j < 9; j++) {
              if (board[j][i] == '.') continue;
      eachColumn = eachColumn || (myset.find(board[j][i])!= myset.end());
      myset.insert(board[j][i]);
    }
  }
  bool eachBox = false;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      unordered_set<int> myset;
      for (int k = 0; k < 9; k++) {
        int n = k / 3;
        int m = k % 3;
                if (board[i * 3 + n][j * 3 + m] == '.') continue;

        eachBox = eachBox || (myset.find(board[i * 3 + n][j * 3 + m]) != myset.end());
        myset.insert(board[i * 3 + n][j * 3 + m]);
      }
    }
  }
  return !eachRow && !eachBox && !eachColumn;        
        
    }
};