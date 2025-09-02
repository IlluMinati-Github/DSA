class Solution {
public:
    int trailingZeroes(int n) {
    int count = 0;
    while (n > 0) {
        n /= 5;
        count += n;
    }
    return count;
}

    // int factorial(int n) {
    //     if (n == 0)
    //         return 1;
    //     return n * factorial(n - 1);
    // }
    // int trailingZeroes(int n) {
    //     int count = 0;
    //     int a = factorial(n);
    //     while(a>0){
    //         int d=a%10;
    //         if(d!=0){
    //             break;
    //         }
    //         else {
    //             count++;
    //         }
    //         a/=10;
    //     }
    //     return count;
    // }
};