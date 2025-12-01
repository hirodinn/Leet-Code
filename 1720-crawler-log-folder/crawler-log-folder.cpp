class Solution {
public:
    int minOperations(vector<string>& logs) {
        int counter = 0;
        for(string st : logs){
            if(st[0]=='.'){
                if(st[1] == '.'){
                    counter--;
                    if(counter<0) counter = 0;
                }
            }else{
                counter++;
            }
        }
        return counter;
    }
};