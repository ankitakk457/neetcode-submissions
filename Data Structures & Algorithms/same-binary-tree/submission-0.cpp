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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> queue1;
        queue1.push(p);
        queue<TreeNode*> queue2;
        queue2.push(q);
        while(!queue1.empty() && !queue2.empty()){
          TreeNode* first=queue1.front();
          queue1.pop();
          TreeNode* second=queue2.front();
          queue2.pop();
          if(first==NULL && second==NULL) continue;
          if(first==NULL || second==NULL)return false;
          if(first->val!=second->val) {
            return false;
          }
        
          queue1.push(first->left);
            queue1.push(first->right);
            queue2.push(second->left);
            queue2.push(second->right);

        }
        return true;
    }
};
