class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> arr;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            arr.push_back(sum);
        }
        int max=-1;
        for(int i=0;i<arr.size();i++){
            if (max<arr[i]) max=arr[i];
        }
        return max;
    }
};