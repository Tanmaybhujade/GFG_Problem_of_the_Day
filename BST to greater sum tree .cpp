class Solution
{
    public:
    void transformHelper(struct Node* root, int& val){
        if(root == NULL){
            return;
        }
        transformHelper(root->right, val);
        //do work in inorder
        int temp = root->data;
        root->data = val;
        val += temp;
        transformHelper(root->left, val);
    }
    void transformTree(struct Node *root)
    {
        //code here
        int val = 0;
        transformHelper(root, val);
    }
};
