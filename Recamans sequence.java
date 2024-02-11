class Solution{
    static ArrayList<Integer> recamanSequence(int n){
        int prev=0;
        int ans=0;
        int i=0;
        ArrayList<Integer> list=new ArrayList<>();
        list.add(0);
        while(i++<n)
        {
            ans=prev-i;
            if(ans<0 || list.contains(ans))
            {
                ans=prev+i;
            }
            list.add(ans);
            prev=ans;
        }
        return list;
    }
}
