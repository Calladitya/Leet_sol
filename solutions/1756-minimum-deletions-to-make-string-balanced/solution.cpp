class Solution {
public:
    int minimumDeletions(string s) {
        int count = 0;
        int bCount = 0;

        for(char ch : s){
            if(ch == 'b'){
                bCount++;
            } 
            else { // 'a'
                count = min(count + 1, bCount);
            }
        }

        return count;
    }
};
