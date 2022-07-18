class Tree {
    // Function to return the ceil of given number in BST.
    ArrayList<Integer> al = new ArrayList<Integer>();
    int findCeil(Node root, int key) {
        if (root == null) return -1;
        // Code here
        int min = Integer.MAX_VALUE;
        preorder(root);
        for(int i=0;i<al.size();i++)
        {
            if(key<=al.get(i))
            {
                min = Math.min(min,al.get(i));
                
            }
        }
        return min;
    }
    void preorder(Node temp)
    {
        if(temp==null)
        {
            return;
        }
        else
        {
            al.add(temp.data);
            preorder(temp.left);
            preorder(temp.right);
        }
    }
}

