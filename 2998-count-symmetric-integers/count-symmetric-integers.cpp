class Solution {
public:
    int SumOfDigits(int n){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int noOfDigits(int n){
        int x = 0;
        while(n > 0){
            x++;
            n /= 10;
        }
        return x;
    }

    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for(int i = low; i <= high; i++){
            int digits = noOfDigits(i);
            if(digits % 2 != 0) continue;

            int half = digits / 2;
            int firstHalf = i / pow(10, half);
            int secondHalf = i % (int)pow(10, half);
            if(SumOfDigits(firstHalf) == SumOfDigits(secondHalf))
                count++;
        }

        return count;
    }
};
