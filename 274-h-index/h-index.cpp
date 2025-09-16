class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end()); 
        int n = citations.size();
        int h = 0;
        for (int i = 0; i < n; i++) {
            int candidate = min(citations[i], n - i);
            h = max(h, candidate);
        }
        return h;
    }
};
