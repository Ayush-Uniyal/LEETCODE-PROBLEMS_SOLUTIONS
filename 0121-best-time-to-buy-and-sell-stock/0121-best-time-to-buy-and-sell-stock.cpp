class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int min=INT_MAX, maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                maxprofit=max(maxprofit,prices[i]-min);
            }
        }
    return maxprofit;
    
    
    }  
    
};