class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int ans=INT_MIN;
    int pre=1,suf=1;
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre=pre*nums[i];
        suf=suf*nums[n-i-1];
        ans=max(ans,max(suf,pre));
    }
    return ans;
    }
};