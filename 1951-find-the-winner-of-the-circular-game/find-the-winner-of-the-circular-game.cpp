class Solution {
public:
    
int findTheWinner(int n, int k) {
  vector<int> vec;
  for (int i = 1; i <= n; i++) {
    vec.push_back(i);
  }
  int stillGot = n;
  int counter = 0;
  while (stillGot != 1) {
    int get = 0;
    while (get < k) {
      if (vec[counter] != 0) {
        get++;
      }
      if (get == k) {
        vec[counter] = 0;
        stillGot--;
        counter = (counter + 1) % n;
        break;
      }
      counter = (counter + 1) % n;
    }
  }
  for (int i = 0; i < n; i++) {
    if (vec[i] != 0) return i + 1;
  }
  return -1;
}
};