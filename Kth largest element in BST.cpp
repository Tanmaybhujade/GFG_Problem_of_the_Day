
class Solution
{
public:
    void modifiedInorder(Node* root, int &k, int &ans){
        if(!root)
            return;
        
        modifiedInorder(root->right, k, ans);
        --k;
        if(!k)  ans = root->data;
        modifiedInorder(root->left, k,  ans);
    }
    
    int kthLargest(Node *root, int k)
    {
        int ans;
        modifiedInorder(root, k, ans);
        return ans;
    }
};
