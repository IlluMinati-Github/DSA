class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> total(n);
        int maxEnergy = INT_MIN;

        // Go backward so we already know totals from future positions
        for (int i = n - 1; i >= 0; --i) {
            if (i + k < n)
                total[i] = energy[i] + total[i + k];
            else
                total[i] = energy[i];

            maxEnergy = max(maxEnergy, total[i]);
        }

        return maxEnergy;
    }
};

// TLE
// class Solution {
// public:
//     int maximumEnergy(vector<int>& energy, int k) {
//         int n = energy.size();
//         int maxEnergy = INT_MIN;  
//         for (int start = 0; start < n; ++start) {
//             int total = 0;
//             for (int j = start; j < n; j += k) {
//                 total += energy[j];
//             }
//             maxEnergy = max(maxEnergy, total);
//         }
//         return maxEnergy;
//     }
// };
