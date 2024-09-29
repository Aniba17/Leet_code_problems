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
      
        vector<TreeNode*> queue;
        vector<TreeNode*> queue1;

        queue.push_back(p);
        queue1.push_back(q);

        int front = 0;
        int front1 = 0;

        while (front < queue.size() && front1 < queue1.size()) {
            
            TreeNode* current = queue[front++];
            TreeNode* current1 = queue1[front1++];

            if (!current && current1) return false;
            if (current && !current1) return false;

            if (current && current1) {
                if (current->val != current1->val) return false;

                queue.push_back(current->left);
                queue.push_back(current->right);
                queue1.push_back(current1->left);
                queue1.push_back(current1->right);
            }
        }

        return (front == queue.size() && front1 == queue1.size());
    }
};