// class Solution {
// public:
//     int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
//         int ans=w;int maxi=-1;int index=-1;
//         unordered_map<int,int>check;

//         while( k > 0){
//             maxi=-1;
//             index=-1;

//             for(int i=0;i<capital.size();i++){
//                 if(check.find(i) == check.end() && capital[i] <=ans && profits[i] >= maxi){
//                     maxi=profits[i];
//                     index=i;
//                 }
//             }
//            if(index==-1){
//             break;
//            }


//             ans+=profits[index];
//             check[index]++;
//             k--;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int ans = w;
        int n = capital.size();

        vector<pair<int, int>> projects;

        for (int i = 0; i < n; i++) {
            projects.push_back({capital[i], profits[i]});
        }

        sort(projects.begin(), projects.end());

        priority_queue<int> pq;
        int i = 0;

        while (k > 0) {
            while (i < n && projects[i].first <= ans) {
                pq.push(projects[i].second);
                i++;
            }

            if (pq.empty()) {
                break;
            }

            ans += pq.top();
            pq.pop();
            k--;
        }

        return ans;
    }
};

