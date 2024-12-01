class Solution {
public:
    int WithinDays(vector<int>& weights, int capacity) {
        int day=1;
        int load=0;
        for(int i=0;i<weights .size();i++){
            if(weights[i]+load>capacity){
            day=day+1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
         while(low<=high){
            int mid=(low+high)/2;
            int dday=WithinDays(weights, mid);
                if(dday<=days){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
                return low;
    }
};
