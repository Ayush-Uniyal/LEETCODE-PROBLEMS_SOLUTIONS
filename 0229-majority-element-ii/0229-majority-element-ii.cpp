class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(); //size of the array
    vector<int> ls; // list of answers

    //declaring a map:
    map<int, int> mpp;

    // least occurrence of the majority element:
    int mini = (n / 3) + 1;

    //storing the elements with its occurnce:
    for (int i = 0; i < n; i++) {
        mpp[nums[i]]++;

        //checking if v[i] is
        // the majority element:
        if (mpp[nums[i]] == mini) {
            ls.push_back(nums[i]);
        }
    }
        return ls;}
};