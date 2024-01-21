vector<int> postorderTraversal(TreeNode* root) {
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

        traversal(root->left,ans);
        traversal(root->right,ans);

         ans.push_back(root->val);

    }