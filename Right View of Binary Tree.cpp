class Solution {
    public:
    vector<int> rightView(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        queue<Node *> q;
        q.push(root);
        while(q.size()) {
            int i, n=q.size();
            for(i=0;i<n;i++) {
                root=q.front(); q.pop();
                if(i==n-1) ans.push_back(root->data);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
        }
        return ans;
    }
};
