class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxx = INT_MIN;     
        int ans;
        int wedth;

        while (left < right) { 
            int minn = min(height[left], height[right]); 
            wedth = right - left;                         
            ans = minn * wedth;
            maxx = max(maxx, ans);                       
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxx;
    }
};

