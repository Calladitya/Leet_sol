class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = ""; 
        for (char c : num) {
            while (!result.empty() && k > 0 && result.back() > c) {
                result.pop_back();
                k--;
            }
            if (!result.empty() || c != '0') { 
                result.push_back(c);
            }
        }
        while (k > 0 && !result.empty()) {
            result.pop_back();
            k--;
        }
        return result.empty() ? "0" : result;
    }
};
/*
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char c : num) {
            while (!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            if (!st.empty() || c != '0') {
                st.push(c); // Avoid leading zeros
            }
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        return result.empty() ? "0" : result;
    }
};

*/



