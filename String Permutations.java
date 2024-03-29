class Solution
{
    public String swap(String s , int a , int b){
        StringBuilder sb = new StringBuilder(s);
        //char temp = s.charAt(a);
        sb.setCharAt(b,s.charAt(a));
        sb.setCharAt(a,s.charAt(b));
        return sb.toString();
    }
    public void permute(String s , ArrayList<String> arr , int l , int r){
        if(l == r){
            arr.add(s);
            return;
        }
        for(int i=l;i<=r;i++){
            s = swap(s,l,i);
            permute(s,arr,l+1,r);
            s = swap(s,l,i);
        }
    }
    public ArrayList<String> permutation(String S)
    {
        //Your code here
        ArrayList<String> ans = new ArrayList<>();
        permute(S,ans,0,S.length()-1);
        Collections.sort(ans);
        return ans;
    }
	   
}
