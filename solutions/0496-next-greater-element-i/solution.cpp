class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int i = 0; i < nums1.size(); i++) {
            bool found = false;  
            bool hasNextGreater = false;  
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > nums2[j]) {
                            result.push_back(nums2[k]);
                            hasNextGreater = true;
                            break;
                        }
                    }
                    if (!hasNextGreater) {
                        result.push_back(-1);
                    }
                    break;  
                }
            }
            if (!found) {
                result.push_back(-1);
            }
        }

        return result;
    }
};

