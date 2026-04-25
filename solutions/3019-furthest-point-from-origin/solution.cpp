class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count=0;
        int blank=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                count++;
            }
            else if(moves[i]=='R'){
                count--;
            }
            else{
                blank++;
            }
        }
        if(count>0) count=count+blank;
        else count=count-blank;
        return abs(count);
    }
};
