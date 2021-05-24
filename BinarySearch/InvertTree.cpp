/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    if (!root){
        return root;
    }
    if (root->left && root->right){
        auto temp = solve(root->left); 
        root->left = solve(root->right);
        root->right = temp;
    }
    else if (root->left){
        root->right = solve(root->left);
        root->left = NULL;
    }
    else if (root->right){
        root->left = solve(root->right);
        root->right = NULL;
    }
    return root;
}