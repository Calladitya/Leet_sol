class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
       int n= nums.size();
    
       int Max=INT_MIN;
       for(int mask=1;mask<(1<<n);mask++){
          int current=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
               current|=nums[i];
            }
        }
        Max=max(Max,current);
       } 
      int count=0;
      for(int mask=1;mask<(1<<n);mask++){
        int currentor=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
              currentor|=nums[i];
            }
        }
        if(currentor==Max){
            count++;
        }
      }
      return count;
    }
};
