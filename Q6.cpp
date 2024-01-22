 vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        if(root==NULL)
        return ans;

        stack<TreeNode*> st;

        TreeNode* temp=root;

        while(1)
        {
            if(temp!=NULL)
            {
                st.push(temp);
                temp=temp->left;
            }
            else
            {
                if(st.empty())
                break;

                temp=st.top();
                ans.push_back(temp->val);
                st.pop();
                temp=temp->right;
            }
            
        }
        return ans;
    }