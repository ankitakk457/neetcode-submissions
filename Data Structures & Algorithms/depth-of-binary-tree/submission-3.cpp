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
    int maxDepth(TreeNode* root) {
        //Iterative DFS using STACK
        // if(root==NULL) return 0;
        // stack<pair<TreeNode*,int>> stack;
        // stack.push({root,1});
        // int res=0;
        // while(!stack.empty()){
        //     pair<TreeNode*,int>current=stack.top();
        //     stack.pop();
        //     TreeNode* node=current.first;
        //     int depth=current.second;
        //     res = max(res, depth);
        //     if(node->left) stack.push({node->left,depth+1});
        //     if(node->right) stack.push({node->right,depth+1});

        // }
        // return res;

        //Iterative BFS using QUEUE
        if(root==NULL)return 0;
        queue<pair<TreeNode*,int>>queue;
        queue.push({root,1});
        int res=1;
        while(!queue.empty()){
            pair<TreeNode*,int> current=queue.front();
            TreeNode* node=current.first;
            int level=current.second;
            queue.pop();
            res=max(res,level);
            if(node->left) queue.push({node->left,level+1});
            if(node->right) queue.push({node->right,level+1});
                    
        }
        return res;
        
    }
};
