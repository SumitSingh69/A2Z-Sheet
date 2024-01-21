 vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)
        return result;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> v;
        while(!q.empty())
        {

            TreeNode* temp=q.front();
            q.pop();
            if(temp!=NULL)
            {
                v.push_back(temp->val);
            
            }
            else
            {
                result.push_back(v);
                v.clear();
                if(!q.empty())
                q.push(NULL);
                continue;

            }

            if(temp->left)
            q.push(temp->left);

            if(temp->right)
            q.push(temp->right);

        }

      return result;

    }