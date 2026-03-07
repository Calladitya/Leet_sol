class Solution {
private:
    void permute(vector<int> input, vector<vector<int>>& result, vector<int> output) {

        if (input.size() == 0) {
            result.push_back(output);
            return;
        }
        unordered_set<int> st;
        for (int i = 0; i < input.size(); i++) {
            if (st.find(input[i]) == st.end()) {
                st.insert(input[i]);

                vector<int> new_ip = input;
                new_ip.erase(new_ip.begin() + i);

                vector<int> new_op = output;
                new_op.push_back(input[i]);

                permute(new_ip, result, new_op);
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> output;
        permute(nums, result, output);
        return result;
    }
};


/*
  // vector<vector<int>>store;
        // sort(nums.begin(),nums.end());
        // do{
        //     store.push_back(nums);
        // }while(next_permutation(nums.begin(),nums.end()));

        // return store;

*/


