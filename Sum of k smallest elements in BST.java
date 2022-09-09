class Tree {
   ArrayList<Integer> list =new ArrayList<>();
   void helper(Node root){
       if(root!=null){
           helper(root.left);
           list.add(root.data);
           helper(root.right);
       }
   }
    int sum(Node root, int k) { 
        if(root==null ||k==0){
           return 0;
       }
       helper(root);
       int sum=0;
       for(int i=0;i<list.size() && k-- >0;i++){
           sum+=list.get(i);
       }
       return sum;
       
       
   } 
}
