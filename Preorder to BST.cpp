class Solution{
public:
    Node* createTree(int pre[], int i, int j) {
        if(i > j) return NULL;
        
        Node* root = newNode(pre[i]);
        
        int k = i+1;
        while(k <= j) {
            if(pre[i] < pre[k]) break;
            k++;
        }
        
        root->left = createTree(pre, i+1, k-1);
        root->right = createTree(pre, k, j);
        
        return root;
    }
    
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        return createTree(pre, 0, size-1);
    }
};
