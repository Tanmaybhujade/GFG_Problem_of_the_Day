class Tree
{
     public ArrayList<Integer> diagonal(Node root)
      {
           //add your code here.
       ArrayList<Integer> list = new ArrayList<>();
       Queue<Node> q = new LinkedList<>();
       while(true) {
           if(root != null) {
               q.offer(root);
               root = root.right;
           }
           else {
               if(q.isEmpty()) {
                   return list;
               }
               else {
                   root = q.remove();
                   list.add(root.data);
                   root =root.left;
               }
           }
       }
      }
}
