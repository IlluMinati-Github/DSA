class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end()); 
        int n = citations.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            int a = min(citations[i], n - i);
            result = max(result, a);
        }
        return result;
    }
};
