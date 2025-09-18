// class Solution {
// public:
//     vector<int> earliestTime(vector<vector<int>>& tasks) {
        // vector<int> result;
        // vector<int> ans;
        // int mn = INT_MAX;   

        // for(int i=0;i<tasks.size();i++){
        //     int sum=0;
        //     for(auto it:tasks[i]){
        //         sum+=it;
        //     }
        //     ans.push_back(sum);
        // }
        // for(int i=0;i<ans.size();i++){
        //     mn = std::min(mn, ans[i]);
        //     result.push_back(mn);
        // }
        // return result;
 class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for (auto &it : tasks) {
            int finish = it[0] + it[1];   // use the current row
            ans = std::min(ans, finish);
        }
        return ans;
    }
};


