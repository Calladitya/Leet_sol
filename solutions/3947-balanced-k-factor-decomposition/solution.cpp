// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// private:
//     vector<int> bestArray;
//     int minSum = INT_MAX;

//     void backtrack(int n, int k, vector<int>& temp, int product, int sum, int start = 1) {
//         if (temp.size() == k) {
//             if (product == n && sum < minSum) {
//                 minSum = sum;
//                 bestArray = temp;
//             }
//             return;
//         }
//         for (int i = start; i <= n; i++) {
//             if (product * i > n) continue; 
//             temp.push_back(i);
//             backtrack(n, k, temp, product * i, sum + i, i); 
//             temp.pop_back();
//         }
//     }

// public:
//     vector<int> minDifference(int n, int k) {
//         vector<int> temp;
//         backtrack(n, k, temp, 1, 0);
//         return bestArray;
//     }
// };

class Solution {
public:
    vector<int> best;
    int bestDiff = INT_MAX;

    vector<int> minDifference(int n, int k) {
        vector<int> curr;
        backtrack(n, k, 1, curr);
        return best;
    }

    void backtrack(int n, int k, int start, vector<int>& curr) {
        if (k == 1) {
            if (n >= start) {
                curr.push_back(n);
                check(curr);
                curr.pop_back();
            }
            return;
        }

        for (int i = start; i <= n; i++) {
            if (n % i == 0) {
                curr.push_back(i);
                backtrack(n / i, k - 1, i, curr);
                curr.pop_back();
            }
        }
    }

    void check(vector<int>& curr) {
        int mn = *min_element(curr.begin(), curr.end());
        int mx = *max_element(curr.begin(), curr.end());
        if (mx - mn < bestDiff) {
            bestDiff = mx - mn;
            best = curr;
        }
    }
};
