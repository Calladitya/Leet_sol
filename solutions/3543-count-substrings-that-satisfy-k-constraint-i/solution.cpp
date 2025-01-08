class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
       /* int count = 0; // To store the total count of valid substrings

        // Outer loop to define the start of the substring
        for (int i = 0; i < s.size(); i++) {
            int zeroCount = 0; // Count of '0's in the current substring
            int oneCount = 0;  // Count of '1's in the current substring

            // Inner loop to define the end of the substring
            for (int j = i; j < s.size(); j++) {
                // Update counts based on the character at position j
                if (s[j] == '0') {
                    zeroCount++;
                } else {
                    oneCount++;
                }

                // Check if the substring satisfies the k-constraint
                if (zeroCount <= k || oneCount <= k) {
                    count++; // Valid substring, increment count
                } else {
                    break; // Stop extending the substring since it violates the constraint
                }
            }
        }

        return count; // Return the total count of valid substrings*/
        int l = 0, r = 0;       
        int countzero = 0;       
        int countone = 0;       
        int count = 0;          

        while (r < s.size()) {
            if (s[r] == '0') {
                countzero++;
            } else {
                countone++;
            }
            while (countzero > k && countone > k) {
                if (s[l] == '0') {
                    countzero--;
                } else {
                    countone--;
                }
                l++;
            }

        
            count += r - l + 1;

            r++;
        }

        return count;
    }
};

