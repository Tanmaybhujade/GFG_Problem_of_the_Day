class Tree {
    public static ArrayList <Integer> diagonalSum(Node root) 
    {
        // code here.
        TreeMap<Integer,Integer> sum = new TreeMap<>();
        calculateSum(root,sum,0);
        ArrayList<Integer> li = new ArrayList<>();
        for(Integer key:sum.keySet()){
            li.add(sum.get(key));
        }
        return li;
    }
    public static void calculateSum(Node root,TreeMap<Integer,Integer> sum,int diag){
        if(root==null){
            return ;
        }
        calculateSum(root.left,sum,diag+1);
        int prevSum = 0;
        if(sum.get(diag)!=null){
            prevSum = sum.get(diag);
        }
        sum.put(diag,(prevSum+root.data));
        calculateSum(root.right,sum,diag);
    }
}
