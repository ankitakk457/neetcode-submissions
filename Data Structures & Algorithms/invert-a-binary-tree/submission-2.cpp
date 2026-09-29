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
    TreeNode* invertTree(TreeNode* root) {
    //Recursive DFS
    //     if(root==NULL){
    //         return NULL;
    //     }
    //     swap(root->left,root->right);
    //     invertTree(root->left);
    //     invertTree(root->right);
    //     return root;
        
    // }

    //Iterative DFS
    if(root==NULL){
             return NULL;
         }
         stack<TreeNode*> stack;
         stack.push(root);
         while(!stack.empty()){
            TreeNode* node= stack.top();
            stack.pop();
            swap(node->left,node->right);
            if(node->right){
                stack.push(node->right);
            }
            if(node->left){
                stack.push(node->left);
            }

         }
         return root;
    }

};
