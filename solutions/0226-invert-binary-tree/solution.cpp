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
        if(!root){
            return NULL;
        }
         queue<TreeNode*>q;
         q.push(root);

         while(!q.empty()){
           TreeNode*Nodes=q.front();
            q.pop();
            //  if(Nodes->left && Nodes->right){//ye me isliye nhi lga sakta kyu ki agar mere tree me right ya left node nhi hui to tb bhi to swap hoga for ex->1->left of 2 se or agar me test case dalta hu ans aata h->1->right of 2 se join h or mere if me yahi dikkat aa rahi thi ki meara if tabhi kaam karega jb us tree me dono left and right at a same time present ho .
               
            if(Nodes->left) q.push(Nodes->left);
            if(Nodes->right) q.push(Nodes->right);
            swap(Nodes->left,Nodes->right);
         }
         return root;
    }
};
