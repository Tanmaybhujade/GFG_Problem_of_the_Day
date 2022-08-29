class Solution
{
public:
    Node *nextRight(Node *root, int key)
    {
        //code here
if(root == NULL)
            return new Node(-1);
    
        queue<Node*> q;
        q.push(root);
    
        while(!q.empty()) {
            int n = q.size();
            bool flag = false;
    
            for(int i = 0; i < n; i++) {
                Node* cur = q.front();
                q.pop();
    
                if(flag)
                    return cur;
    
                if(cur->data == key) {
                    flag = true;
                }
    
                if(cur->left != NULL)
                    q.push(cur->left);
    
                if(cur->right != NULL)
                    q.push(cur->right);
            }
            
            if(flag)
                return new Node(-1);
        }
    
        return new Node(-1);
    }
};

