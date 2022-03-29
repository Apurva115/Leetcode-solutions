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
 bool isValid(TreeNode* root, TreeNode* lower, TreeNode* upper)
 {
     if(root == NULL)
         return true;
     if(lower != NULL && root->val <= lower->val)
         return false;
     if(upper != NULL && root->val  >= upper->val)
         return false;
     return isValid(root->left, lower, root) && isValid(root->right,root,upper);
 }
        
    bool isValidBST(TreeNode* root) {
        return isValid(root, NULL, NULL);
        
        
       
        
        
    }
};