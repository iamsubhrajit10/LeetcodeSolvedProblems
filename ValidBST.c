/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isValidBSTUtil(struct TreeNode* root, long long minVal, long long maxVal) {
    if (root == NULL) {
        return true;
    }
    
    if (root->val <= minVal || root->val >= maxVal) {
        return false;
    }
    
    return isValidBSTUtil(root->left, minVal, root->val) &&
           isValidBSTUtil(root->right, root->val, maxVal);
}

bool isValidBST(struct TreeNode* root) {
    return isValidBSTUtil(root, LLONG_MIN, LLONG_MAX);
}
