class Solution {
public:
 /* vector<string> getPermutations(string s1) {
        vector<string> permutations;
        sort(s1.begin(), s1.end());  
        do {
            permutations.push_back(s1); 
        } while (next_permutation(s1.begin(), s1.end()));
        return permutations;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<string> permutations = getPermutations(s1); 
        for (const string &perm : permutations) {
            if (s2.find(perm) != string::npos) {  
                return true;
            }
        }
        return false; */
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        
        if (n > m) return false; 
        unordered_map<char, int> s1_freq;
        for (char c : s1) {
            s1_freq[c]++;
        }
        unordered_map<char, int> window_freq;
        int l = 0; 

        for (int r = 0; r < m; r++) {
            window_freq[s2[r]]++;
            if (r - l + 1 > n) {
                if (--window_freq[s2[l]] == 0) {
                    window_freq.erase(s2[l]); 
                }
                l++; 
            }
            if (window_freq == s1_freq) {
                return true;
            }
        }

        return false;  
    }
};
