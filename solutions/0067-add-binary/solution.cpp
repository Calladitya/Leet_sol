
class Solution {
public:
    string addBinary(string a, string b) {
        int sum = 0;
        int carry = 0;
        string x = "";
        string result = "";
        int count = 0;

        if (a.size() > b.size()) {
            while (count < a.size() - b.size()) {
                x.push_back('0');
                count++;
            }
            x += b;

            int i = a.size() - 1;
            int j = x.size() - 1;

            while (i >= 0 && j >= 0) {
                sum = (a[i] - '0') + (x[j] - '0') + carry;
                result.push_back((sum % 2) + '0');
                carry = sum / 2;
                i--;
                j--;
            }
        }
        else {
            while (count < b.size() - a.size()) {
                x.push_back('0');
                count++;
            }
            x += a;

            int i = b.size() - 1;
            int j = x.size() - 1;

            while (i >= 0 && j >= 0) {
                sum = (b[i] - '0') + (x[j] - '0') + carry;
                result.push_back((sum % 2) + '0');
                carry = sum / 2;
                i--;
                j--;
            }
        }

        if (carry) {
            result.push_back('1');
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

