/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int inorder(TreeNode* root,int &cnt){
    if(root==NULL) return 0;
    cnt++;
    inorder(root->left,cnt);
    inorder(root->right,cnt);
    return cnt;
}
    int countNodes(TreeNode* root) {
        int cnt=0;
      inorder(root,cnt);
      return cnt;  
    }
};