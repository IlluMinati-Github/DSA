#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());  
        vector<int> luckyNumbers;

        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            bool alreadyCounted = false;

            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    alreadyCounted = true;
                    break;
                }
            }
            if (alreadyCounted) continue;

            for (int j = 0; j < arr.size(); j++) {
                if (arr[i] == arr[j]) count++;
            }

            if (count == arr[i]) {
                luckyNumbers.push_back(arr[i]);
            }
        }

        int maxLucky = -1;
        for (int i = 0; i < luckyNumbers.size(); i++) {
            if (luckyNumbers[i] > maxLucky) {
                maxLucky = luckyNumbers[i];
            }
        }

        return maxLucky;
    }
};
