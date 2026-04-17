class Solution {
private:
    bool isPrime(int num){
        if(num <= 1) return false;

        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }

public:
    int minOperations(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            
            // EVEN index → should be PRIME
            if(i % 2 == 0){
                while(!isPrime(nums[i])){
                    nums[i]++;
                    count++;
                }
            }
            else{
                while(isPrime(nums[i])){
                    nums[i]++;
                    count++;
                }
            }
        }

        return count;
    }
};
