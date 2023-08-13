/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root){
    if (!root)
        return 0;
    int leftDepth=1, rightDepth=1;
    if(root->left)
        leftDepth= 1+maxDepth(root->left);
    if(root->right)
        rightDepth= 1+maxDepth(root->right);
    return (leftDepth<rightDepth)?rightDepth:leftDepth;
}
