class Solution
{
public:
    int tar, ans;
    // size, max on the left, min on the right, sum of the subtree
    vector<int> solve(Node *root)
    {
        // null
        if (!root)
            return {0, INT_MIN, INT_MAX, 0};

        // leaf
        if (!root->left and !root->right)
        {
            if (root->data == tar)
                ans = min(ans, 1);
            return {1, root->data, root->data, root->data};
        }

        vector<int> l = solve(root->left);
        vector<int> r = solve(root->right);

        // check if bst
        if (l[1] < root->data && root->data < r[2])
        {
            if ((root->data + l[3] + r[3]) == tar)
                ans = min(ans, 1 + l[0] + r[0]);
            return {1 + l[0] + r[0], max(root->data, r[1]), min(root->data, l[2]), root->data + l[3] + r[3]};
        }

        return {min(l[0], r[0]), INT_MAX, INT_MIN, root->data + l[3] + r[3]};
    }

    int minSubtreeSumBST(int target, Node *root)
    {
        tar = target, ans = 1e9;
        solve(root);
        return ans == 1e9 ? -1 : ans;
    }
};
