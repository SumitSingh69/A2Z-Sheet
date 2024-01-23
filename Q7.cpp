 vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL)
        return v;

        stack<TreeNode*> st1;
        stack<int> st2;
        st1.push(root);

        while(!st1.empty())
        {
            TreeNode* temp=st1.top();
            st1.pop();

            st2.push(temp->val);

           
            if(temp->left)
            st1.push(temp->left);

             if(temp->right)
            st1.push(temp->right);

        }

        while(!st2.empty())
        {
            v.push_back(st2.top());
            st2.pop();
        }

        return v;

    
    }