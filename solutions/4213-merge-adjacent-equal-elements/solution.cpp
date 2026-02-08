class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>temarivolo;

        for(int num:nums){
            temarivolo.push_back(num);

            while(temarivolo.size()>=2){
                int n=temarivolo.size();

                if(temarivolo[n-1]==temarivolo[n-2]){
                    long long sum=temarivolo[n-1]+temarivolo[n-2];

                    temarivolo.pop_back();
                    temarivolo.pop_back();

                    temarivolo.push_back(sum);
                }
                else break;
            }
        }
        return temarivolo;
    }
};
