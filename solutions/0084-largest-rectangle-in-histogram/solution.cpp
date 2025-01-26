class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> prefix_sum(n, 0);  
        vector<int> suffix_sum(n, 0);
        
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                prefix_sum[i] = 0;
            } else {
                prefix_sum[i] = st.top() + 1;
            }
            
            st.push(i); 
        }
        while (!st.empty()) {
            st.pop();
        }
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                suffix_sum[i] = n - 1;
            } else {
                suffix_sum[i] = st.top() - 1;
            }
            
            st.push(i);  
        }
        int max_area = 0;
        for (int i = 0; i < n; i++) {
            int width = suffix_sum[i] - prefix_sum[i] + 1;
            max_area = max(max_area, heights[i] * width);
        }
        
        return max_area;
    }
};

