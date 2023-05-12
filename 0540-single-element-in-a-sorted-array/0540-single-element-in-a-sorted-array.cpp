class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int no=0;
        for(int i=0;i<nums.size();i++){
           no=no^nums[i];
        }return no;
    }
};