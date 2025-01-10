class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;  
        int sum = 0;   
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        int avg = sum / k;
        if (avg >= threshold) {
            count++;
        }
        for (int i = k; i < arr.size(); i++) {
            sum += arr[i] - arr[i - k]; // Update the sum for the current window
            avg = sum / k;              // Calculate the average for the current window
            if (avg >= threshold) {   
                count++;
            }
        }

        return count;
    }
};

