class Solution {
public:
    int minRotations(string s) {
        int i = 0;
        int j = s.size();
        int sum = 0;int prev=0;
        int mini = INT_MAX;

        while (i < j) {
          int curr=s[i]-'0';

          mini=min(abs(curr-prev) , 10-(abs(curr-prev)));
          sum+=mini;
          
          prev=curr;
          i++;
        }
        return sum;
    }
};
