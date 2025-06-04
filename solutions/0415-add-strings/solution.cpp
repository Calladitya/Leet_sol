class Solution {
public:
    string addStrings(string num1, string num2) {
        return addHelper(num1, num2, num1.size() - 1, num2.size() - 1, 0);
    }

private:
    string addHelper(string& num1, string& num2, int l, int r, int carry) {
        if (l < 0 && r < 0 && carry == 0) {
            return "";
        }

        int digit1 = (l >= 0) ? num1[l] - '0' : 0;
        int digit2 = (r >= 0) ? num2[r] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        int newDigit = sum % 10;
        int newCarry = sum / 10;

      
        return addHelper(num1, num2, l - 1, r - 1, newCarry) + char(newDigit + '0');
    }
};

