class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int moreneeded=target-nums[i];
            if(mpp.find(moreneeded)!=mpp.end()){
                ans.push_back(mpp[moreneeded]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};