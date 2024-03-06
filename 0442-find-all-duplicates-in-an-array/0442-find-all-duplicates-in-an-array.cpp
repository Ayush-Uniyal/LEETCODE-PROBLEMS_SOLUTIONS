class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      unordered_map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        vector<int>s;
        for(auto x:freq){
            if(x.second==2) {
                s.push_back(x.first);
            }
        }
        return s;
        
    }
};