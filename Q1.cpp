 vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL)
        return result;

        
        traversal(root,result);

        return result;
        
    }
    void traversal(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL)
        return;

        ans.push_back(root->val);

        traversal(root->left,ans);
        traversal(root->right,ans);

        return;
    }