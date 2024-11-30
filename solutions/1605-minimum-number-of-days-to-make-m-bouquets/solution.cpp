class Solution {
public:
 
    // Helper function to check if we can make m bouquets with k adjacent flowers by a given day
    bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int days) {
        int bouquets = 0;
        int flowers = 0;
        
        for (int day : bloomDay) {
            if (day <= days) {
                flowers++; // The flower can be used for a bouquet
                if (flowers == k) { // We can make one bouquet of size k
                    bouquets++;
                    flowers = 0; // Reset flower count after making a bouquet
                }
            } else {
                flowers = 0; // Reset if the flower has not bloomed yet
            }
        }
        
        return bouquets >= m; // Check if we can make at least m bouquets
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        // If there are not enough flowers to make m bouquets, return -1
        if ((long long )m * k > bloomDay.size()) {
            return -1;
        }

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                result = mid; // Found a valid solution, try for smaller days
                right = mid - 1;
            } else {
                left = mid + 1; // Try for larger days
            }
        }

        return result;
    }
};
