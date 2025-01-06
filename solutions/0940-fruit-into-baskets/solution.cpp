class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,count=0;
        map<int,int>mpp;
         while(r<fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size()<=2){
                count+=1;
            }
            if(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
               // count--;
                l++;
            }
            r++;
         }
         return count;
    }
};
