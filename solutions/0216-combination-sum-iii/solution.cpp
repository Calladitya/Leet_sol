class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int k, int n, vector<int> temp, int sum = 0, int count = 0, int index = 1) {
        if (count == k && sum == n) {
            result.push_back(temp);
            return;
        }

        for (int i = index; i <= 9; i++) {  // numbers from 1 to 9
            sum += i;
            temp.push_back(i);
            count += 1;

            backtrack(k, n, temp, sum, count, i + 1); // pass temp also

            sum -= i;
            temp.pop_back();
            count -= 1;
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        backtrack(k, n, temp, 0, 0, 1);
        return result;
    }
};

