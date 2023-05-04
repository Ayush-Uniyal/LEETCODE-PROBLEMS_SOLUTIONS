class Solution {
public:
   void help(int i,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
       if(i==nums.size())
       {
          ans.push_back(temp);
       }
   
    else
    {
        temp.push_back(nums[i]);
        help(i+1,nums,temp,ans);
        temp.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])  i++;
        help(i+1,nums,temp,ans);
    }
   }
    vector<vector<int>> subsetsWithDup(vector<int>&nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        help(0,nums,temp,ans);
        return ans;
    }
};