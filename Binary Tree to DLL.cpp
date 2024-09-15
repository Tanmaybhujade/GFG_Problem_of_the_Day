
class Solution {
  public:
    pair<Node*,Node*> solve(Node*root){
        if(!root){
            return {nullptr,nullptr};
        }
        auto t1 = solve(root->left);
        auto t2 = solve(root->right);
        Node*lst = t1.first;
        Node*len = t1.second;
        Node*rst = t2.first;
        Node*ren = t2.second;
        if(len){
            len->right = root;
            root->left = len;
            root->right = rst;
            if(rst){
                rst->left = root;
                return {lst,ren};
            }
            return {lst,root};
        }
        else{
            root->left = len;
            root->right = rst;
            if(rst){
                rst->left = root;
                return {root,ren};
            }
            return {root,root};
        }
    }
    Node* bToDLL(Node* root) {
        return solve(root).first;
    }
};
