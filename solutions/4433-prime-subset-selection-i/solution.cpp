// class Solution {
//     private:
//     bool isprime(int num){
//      if(num < 2){
//          return false;
//      }
        
//         for(int i=2; i*i<=num;i++){
//             if(num % i == 0){
//                return false;
//             }
//         }
//         return true;;
//     }
// public:
//     vector<int> maxPrimes(int n, int s) {
//         int num;int sum=0;vector<int>result;
//         for(int i=2;i<=n;i++){
//            if( isprime(i)){
//             if(sum + i <=s){
//                 sum+=i;
//                 result.push_back(i);
//             }
//         }
//       }
//         return result;
//     }
// };


class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }

        vector<int> result;
        long long sum = 0;

        for (int i = 2; i <= n; i++) {
            if (prime[i]) {
                if (sum + i > s) {
                    break;
                }

                sum += i;
                result.push_back(i);
            }
        }

        return result;
    }
};

