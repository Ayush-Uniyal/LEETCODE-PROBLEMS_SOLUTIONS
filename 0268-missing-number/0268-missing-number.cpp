#include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int n=nums.size();
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<=n-1;i++)
    {
        s2=s2+nums[i];
    }
    int missingnumber=sum-s2;
    return missingnumber;

    }
};