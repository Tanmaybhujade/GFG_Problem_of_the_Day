
class Solution
{
public:
    int count=0;
    int X;
    void Inordered_Travelsal(Node *root,unordered_map<int,int> &m){
        if(root==NULL) return;
        Inordered_Travelsal(root->left,m);
        m[root->data]++;
        Inordered_Travelsal(root->right,m);
    }
    
    void Inordered_Travelsal_For_Second(Node *root,unordered_map<int,int> &m){
        if(root==NULL) return;
        Inordered_Travelsal_For_Second(root->left,m);
        if(m[X-(root->data)]>0){
            count++;
        }
        Inordered_Travelsal_For_Second(root->right,m);
    }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_map<int,int> m;
        X=x;
        count=0;
        Inordered_Travelsal(root1,m);
        Inordered_Travelsal_For_Second(root2,m);
        return count;
    }
};
