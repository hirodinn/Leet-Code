class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCounter = 0;
        int number = 1;
        int counter = 0;
        while(true){
            if(counter < arr.size() && arr[counter] == number){
                counter++;
            }else{
                missingCounter++;
                if(missingCounter == k){
                    break;
                }

            }
                            number++;

        }
        return number;
    }
};