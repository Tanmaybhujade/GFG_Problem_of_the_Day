class Solution{
public:
    Node* findNode(Node* root, int target){
        if(root == NULL){
            return NULL;
        }
        if(root->data == target){
            return root;
        }
        else if(root->data < target){
            return findNode(root->right, target);
        }
        else{
            return findNode(root->left, target);
        }
    }
    
    void travel(Node* root, long long &sum, int curr){
        if(root == NULL){
            return;
        }
        if(curr == 0){
            sum += root->data;
        }
        travel(root->left, sum , curr - 1);
        travel(root->right, sum, curr + 1);
    }
    

    long long int verticallyDownBST(Node *root,int target){
        Node* node = findNode(root, target);
        if(node == NULL){
            return -1;
        }
        long long sum = 0;
        travel(node->left, sum, -1);
        travel(node->right, sum, 1);
        return sum;
    }
};
