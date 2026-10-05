class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for(int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        int l=0;int h=nums1.size();
        float median;
        if(nums1.size() % 2 == 0) {

            int mid1 =(l+h)/ 2 - 1;
            int mid2 =  (l+h)/ 2;

            median=(nums1[mid1] + nums1[mid2]) / 2.0;

            return median;
        }
        else {

            int mid1 = (l+h)/ 2;
             median = nums1[mid1];
        }
        return median;
    }
};
