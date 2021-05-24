/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int val) {
    if (!root){
        return false;
    }
    if (root->val == val){
        return true;
    }
    bool flag = false;
    if (root->left){
        flag = max(flag, solve(root->left, val));
    }
    if (root->right){
        flag = max(flag, solve(root->right, val));
    }
    return flag;
}