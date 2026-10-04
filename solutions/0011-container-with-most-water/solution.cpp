class Solution {
public:
    int maxArea(vector<int>& height) {
        int p=0;
        int q=height.size()-1;
        int max_area=INT_MIN;
        int len=INT_MAX;
        while(p <= q){
            len=min(height[p],height[q]);
            max_area=max(max_area,((q-p)*len));
            if(height[p] < height[q]){
                p++;
            }else{
                q--;
            }
        }
        return max_area;
    }
};
