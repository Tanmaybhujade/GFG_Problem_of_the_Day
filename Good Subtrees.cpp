class Solution{
public:
    int goodSubtrees(Node *root,int k){
        // Code here
        int ans = 0;
        solve(root, k, ans);
        return ans;
    }
    
    unordered_set<int> solve(Node* root, int k, int &ans) {
        unordered_set<int> distinct;
        if(!root) return distinct;
        unordered_set<int> l = solve(root -> left, k, ans);
        unordered_set<int> r = solve(root -> right, k, ans);
        
        // If we already have >k distinct vals, no need to compute further
        if(l.size() > k) return l;
        if(r.size() > k) return r;
        

        distinct.insert(root -> data);
        for(int x : l) distinct.insert(x);
        for(int x : r) distinct.insert(x);
        if(distinct.size() <= k) ans++;
        return distinct;
    }
};
