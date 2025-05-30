class Solution {
public:
    // Helper: Prime check
    bool isPrime(long long num) {
        if (num < 2) return false;
        for (long long i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    long long sumOfLargestPrimes(string s) {
        set<long long> primes;

        int n = s.size();
        for (int i = 0; i < n; ++i) {
            string current = "";
            for (int j = i; j < n && j - i < 10; ++j) {  // Optional: limit size to avoid overflow
                current += s[j];
                long long num = stoll(current);  // Convert substring to number
                if (isPrime(num)) {
                    primes.insert(num);
                }
            }
        }

        // Convert to vector and get largest 3
        vector<long long> primeList(primes.begin(), primes.end());
        sort(primeList.rbegin(), primeList.rend()); // Sort descending

        long long sum = 0;
        for (int i = 0; i < min(3, (int)primeList.size()); ++i) {
            sum += primeList[i];
        }

        return sum;
    }
};
