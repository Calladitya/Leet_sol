class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0;
        int rightmax=0;
        int count=0;
        int i=0;int j=height.size()-1;
        while(i <= j){
            if(leftmax <= rightmax){
                if(height[i]>=leftmax){
                    leftmax=height[i];
                }
                else{
                    count+=leftmax-height[i];
                }
                i++;
            }
            else{
                if(height[j]>=rightmax){
                    rightmax=height[j];
                }
                else{
                    count+=rightmax-height[j];
                }
                j--;
            }
        }
        return count;
    }
};
