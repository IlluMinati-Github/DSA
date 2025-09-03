class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = prices[0];   // keep track of minimum so far
        int maxProfit = 0;

        for (int i = 1; i < n; i++) {
            if (prices[i] > minPrice) {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            } else {
                minPrice = prices[i];
            }
        }

        return maxProfit;
    }
};

// TLE
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;
//         int n = prices.size();

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 int tempProfit = prices[j] - prices[i]; 
//                 maxProfit = max(maxProfit, tempProfit);
//             }
//         }

//         return maxProfit;
//     }
// };

// Not all test case passed;
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxiProfita = 0;
//         int n = prices.size();
//         int miniEle = *min_element(prices.begin(), prices.end());
//         int minId = -1;

//         for (int i = 0; i < n; i++) {
//             if (miniEle == prices[i]) {
//                 minId = i;
//                 break;
//             }
//         }
//         if (minId == n - 1) {
//             prices.erase(prices.begin() + minId);
//             miniEle = *min_element(prices.begin(), prices.end());
//             for (int i = 0; i < n; i++) {
//                 if (miniEle == prices[i]) {
//                     minId = i;
//                     break;
//                 }
//             }
//         }

//         int tempmax = 0;
//         for (int i = minId; i < n; i++) {
//             if (miniEle < prices[i]) {
//                 tempmax = prices[i] - miniEle;
//             }
//             maxiProfita = max(maxiProfita, tempmax);
//         }

//         return maxiProfita;
//     }
// };