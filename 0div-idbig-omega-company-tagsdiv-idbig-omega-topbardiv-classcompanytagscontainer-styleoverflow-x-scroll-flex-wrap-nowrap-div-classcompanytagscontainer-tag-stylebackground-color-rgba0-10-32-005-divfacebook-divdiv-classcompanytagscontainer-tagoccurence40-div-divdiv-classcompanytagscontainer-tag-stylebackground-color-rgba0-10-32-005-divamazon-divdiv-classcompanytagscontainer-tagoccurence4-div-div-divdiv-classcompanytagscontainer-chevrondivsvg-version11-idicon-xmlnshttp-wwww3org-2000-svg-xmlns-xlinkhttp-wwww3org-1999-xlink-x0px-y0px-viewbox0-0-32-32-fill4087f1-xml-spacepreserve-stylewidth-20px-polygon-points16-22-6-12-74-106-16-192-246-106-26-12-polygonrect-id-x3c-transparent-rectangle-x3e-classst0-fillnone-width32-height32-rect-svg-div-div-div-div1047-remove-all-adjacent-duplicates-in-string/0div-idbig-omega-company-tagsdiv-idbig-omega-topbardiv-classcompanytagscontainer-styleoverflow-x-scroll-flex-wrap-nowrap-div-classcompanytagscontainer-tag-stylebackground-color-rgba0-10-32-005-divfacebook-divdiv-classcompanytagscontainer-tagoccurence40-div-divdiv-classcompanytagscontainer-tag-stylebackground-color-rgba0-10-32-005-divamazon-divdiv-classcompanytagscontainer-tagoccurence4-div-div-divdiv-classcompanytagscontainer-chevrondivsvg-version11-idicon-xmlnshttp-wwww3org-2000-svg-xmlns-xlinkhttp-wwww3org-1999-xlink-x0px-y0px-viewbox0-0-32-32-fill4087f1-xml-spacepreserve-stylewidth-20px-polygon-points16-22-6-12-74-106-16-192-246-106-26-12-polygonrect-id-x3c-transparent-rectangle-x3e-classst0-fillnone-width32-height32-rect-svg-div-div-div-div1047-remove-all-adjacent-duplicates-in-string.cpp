class Solution {
public:
    string removeDuplicates(string s) {
     
      string ans = "";
        for (auto &i : s) {
            // Check if ans is empty or if the current element of original string
            // does not match the last appended element of ans
            if (ans.empty() || i != ans.back()) {
                // Append the current element to ans
                ans += i;
            } else {
                // Remove the last element from ans
                ans.pop_back();
            }
        }
        return ans;
    
    }
};