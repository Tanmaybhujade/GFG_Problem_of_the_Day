class Solution{

    public:
    
    void findHome(Node*root, int homeData, Node*&home)
    {
        if(!root)return;
        
        if(root->data == homeData)
        {
            home = root;
            return;
        }
        findHome(root->left,homeData,home);
        findHome(root->right,homeData,home);
    }
    void findParent(Node*root,unordered_map<Node*,Node*>&parent)
    {
        if(!root) return;
        
        if(root->left) parent[root->left] = root;
        if(root->right) parent[root->right] = root;
        
        findParent(root->left,parent);
        findParent(root->right,parent);
        
        
        
    }
    int ladoos(Node* root, int homeData, int k)
    {
        
        int res = 0;
        unordered_map<Node*,Node*>parent;
        parent[root] = NULL;
        unordered_map<Node*,bool>vis;
        
        
        findParent(root,parent);
        
        Node*home;
        
        findHome(root,homeData,home);
        
        vis[home] = true;

        queue<Node*>q;
        
        q.push(home);
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                Node* node = q.front();
                res+=node->data;
                vis[node] = true;
                q.pop();

                if(node->left and !vis[node->left])
                    q.push(node->left);
                if(node->right and !vis[node->right])
                    q.push(node->right);
                if(parent[node] and !vis[parent[node]])
                       q.push(parent[node]);
            }
            k--;
            if(k<0) break;
            
        }
        return res;
    }


};
