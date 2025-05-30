class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        helper(n, m, 1, num1, num2);  // Start recursion from i = 1
        return num1 - num2;
    }

private:
    void helper(int n, int m, int i, int& num1, int& num2) {
        if (i > n) return;

        if (i % m != 0) {
            num1 += i;
        } else {
            num2 += i;
        }

        helper(n, m, i + 1, num1, num2);
    }
};

