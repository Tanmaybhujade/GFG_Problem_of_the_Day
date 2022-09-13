   class Solution{
private:
    void inorder(Node* root, vector<int> &v) {
        if(!root)
            return;
            
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    
    
    void postorder(Node* root, vector<int> &v, int &i) {
        if(!root)
            return;
            
        postorder(root->left, v, i);
        postorder(root->right, v, i);
        root->data = v[i++];
    }
    
    
public:
    void convertToMaxHeapUtil(Node* root)
    {
        vector<int> v;
        inorder(root, v);
        int i = 0;
        postorder(root, v, i);
    } 
};
