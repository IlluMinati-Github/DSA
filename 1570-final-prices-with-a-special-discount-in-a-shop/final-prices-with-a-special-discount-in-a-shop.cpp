class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        for(int i=0;i<n;i++){
            int item=prices[i];
            int discount=0;
            for(int j=i+1;j<n;j++){
                if (prices[j]<=item){
                    discount=prices[j];
                    break;
                }
            }
            item-=discount;
            prices[i]=item;
        }
        return prices;
    }
};