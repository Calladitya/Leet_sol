class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        vector<int> x;

        for(char ch : s){
            if(ch != '0'){
                x.push_back(ch - '0');
            }
        }

        long long sum = 0;
        for(int d : x){
            sum += d;
        }
        long long num = 0;
        for(int d : x){
            num = num * 10 + d;
        }

        return num * sum;
    }
};

