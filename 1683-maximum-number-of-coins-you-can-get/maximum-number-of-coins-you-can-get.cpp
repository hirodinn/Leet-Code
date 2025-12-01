class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int counter = 0;
        int p = 0;
        for(int i = piles.size() - 2; i>= 0 && p<piles.size() / 3; i-=2){
            counter+=piles[i];
            p++;
        }
        return counter;
    }
};