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
    bool isSameTree(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL&&root2==NULL){
            return true;
        }
        if(root1!=NULL&&root2==NULL){
            return false;
        }
        if(root1==NULL&&root2!=NULL){
            return false;
        }
        bool leftAns=isSameTree(root1->left,root2->left);
         bool rightAns=isSameTree(root1->right,root2->right);
        bool val=root1->val==root2->val;
        if(leftAns&&rightAns&&val) return true;
        else return false;
        
    }
};