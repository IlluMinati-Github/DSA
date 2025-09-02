class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // initially assume all numbers are prime
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;  // 0 and 1 are not prime

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                // mark multiples of i as not prime
                for (int j = 2 * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) count++;
        }
        return count;
    }
};

// class Solution {
// public:
//     bool isPrime(int n) {
//         if (n <= 1)
//             return false;
//         if (n <= 3)
//             return true;
//         if (n % 2 == 0 || n % 3 == 0)
//             return false;
//         for (int i = 5; i * i <= n; i += 6) {
//             if (n % i == 0 || n % (i + 2) == 0)
//                 return false;
//         }
//         return true;
//     }

//     int countPrimes(int n) {
//         int count=0;
//         for(int i=1;i<n;i++){
//             if (isPrime(i)){
//                 count++;
//             }
//         }
//         return count;
//     }
// };