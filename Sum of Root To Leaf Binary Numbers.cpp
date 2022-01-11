 //Sum of Root To Leaf Binary Numbers
class Solution {
public:
    int sol;
    void DFS(TreeNode* root,int sum){
        if(root==NULL)
        {
            return;
        }
       if(root->left==NULL && root->right==NULL){
           sol+=((sum<<1) + root->val);
           return;
       }
        DFS(root->left,((sum<<1) + root->val));
        DFS(root->right,((sum<<1) + root->val));
    }
    int sumRootToLeaf(TreeNode* root) {
        sol = 0;
        DFS(root,0);
        return sol;
        
    }
};