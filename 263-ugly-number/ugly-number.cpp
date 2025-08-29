class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;  // ugly numbers must be positive

        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        return n == 1;
    }
};



// class Solution {
// public:
//     bool isUgly(int n) {
//         if (n==1) return true;
//         else if (n%2==0 && n%3==0 && n%5==0){
//             return true;
//         }
//         else if (n%2==0 || n%3==0 || n%5==0){
//             return true;
//         }
//         return false;

//     }
// };