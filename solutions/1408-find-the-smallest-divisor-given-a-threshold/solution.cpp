class Solution {
public:
int sumByD(vector<int> &arr, int div) {
    int n = arr.size(); //size of array
    //Find the summation of division values:
    int sum = 0;
    for (int num : arr) {
        sum += ceil(num+div-1)/div;
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high =*max_element(nums.begin(),nums.end());
        int sum=0;
        int ans=-1;
        if(nums.size()>threshold){
            return -1;
        }
        while(low<=high){
            int mid=(low+high)/2;
           if(sumByD(nums,mid)<=threshold){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
        return low;
    }
};

