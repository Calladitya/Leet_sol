/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original) return nullptr;

        queue<TreeNode*> qOriginal, qCloned;
        qOriginal.push(original);
        qCloned.push(cloned);

        while (!qOriginal.empty()) {
            TreeNode* currOriginal = qOriginal.front(); qOriginal.pop();
            TreeNode* currCloned = qCloned.front(); qCloned.pop();

            if (currOriginal == target) return currCloned;

            if (currOriginal->left) {
                qOriginal.push(currOriginal->left);
                qCloned.push(currCloned->left);
            }
            if (currOriginal->right) {
                qOriginal.push(currOriginal->right);
                qCloned.push(currCloned->right);
            }
        }

        return nullptr; 
    }
};

