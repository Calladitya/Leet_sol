/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low1 = 0;
        int low2 = 0;
        int high = n - 1;
        int high2 = 0;
        int peak;

        // Find peak using binary search
        int l = 0, h = n - 1;

        while (l < h) {
            int mid = l + (h - l) / 2;

            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }

        peak = l;

        int ans = mountainArr.get(peak);

        if (ans == target) {
            return peak;
        }

        high2 = peak - 1;

        while (low1 <= high2) {
            int mid = low1 + (high2 - low1) / 2;
            int val = mountainArr.get(mid);

            if (val == target) {
                return mid;
            }

            if (val < target) {
                low1 = mid + 1;
            } else {
                high2 = mid - 1;
            }
        }

        low2 = peak + 1;

        while (low2 <= high) {
            int mid = low2 + (high - low2) / 2;
            int val = mountainArr.get(mid);

            if (val == target) {
                return mid;
            }

            if (val > target) {
                low2 = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
};
