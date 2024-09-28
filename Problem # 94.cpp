class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; 
        TreeNode *current = root;
        TreeNode *pre;
        
        while (current != nullptr) {
            if (current->left == nullptr) {
               
                result.push_back(current->val);
                current = current->right;
            } else {
           
                pre = current->left;
                while (pre->right != nullptr && pre->right != current) {
                    pre = pre->right;
                }

             
                if (pre->right == nullptr) {
                    pre->right = current;
                    current = current->left;
                } 
                
                else {
                    pre->right = nullptr;  
                    result.push_back(current->val);
                    current = current->right;
                }
            }
        }
        return result;
    }
};