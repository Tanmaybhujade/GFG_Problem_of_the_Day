

class Solution {
    public int kthCommonAncestor(Node root, int k, int x, int y) {
        ArrayList<Integer> arr = new ArrayList<>();
        
        while(root != null) {
            arr.add(root.data);
            
            if(x < root.data && y < root.data)
                root = root.left;
            else if(x > root.data && y > root.data)
                root = root.right;
            else
                break;
        }
        
        Collections.reverse(arr);
        return k > arr.size() ? -1 : arr.get(k - 1);
    }
}
