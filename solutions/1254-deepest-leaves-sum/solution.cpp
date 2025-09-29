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
    int deepestLeavesSum(TreeNode* root) {
        if(!root){
            return 1;
        }
        int sum=0;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;

        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*>Nodes;

            for(int i=0;i<size;i++){ 
                TreeNode*Node=q.front();
                q.pop();
                Nodes.push_back(Node);

                 if(Node->left) q.push(Node->left);
                 if(Node->right) q.push(Node->right);
            }
            sum=0;
          for(int i=0;i<Nodes.size();i++){
                 sum+=Nodes[i]->val;
          }
        }
            return sum;
    }
};
