class Solution{
    static List<String> pattern(int n){
        List<String> ans =new ArrayList<>();
       int count=1;
       for(int i=n;i>=1;i--){
           StringBuilder s =new StringBuilder();
           for(int j=1;j<=2*(n-i);j++){
               s.append("-");
           }
           for(int j=i ; j>=1 ;j--){
               s.append(count++ +"*");
           }
           ans.add(s.toString());
       }
       for(int i=n-1;i>=0;i--){
           StringBuilder s= new StringBuilder(ans.get(i));
           for(int j=n-i;j>0;j--){
               s.append(count++ +"*");
           }
           s.deleteCharAt(s.length()-1);
           ans.set(i,s.toString());
       }
       return ans;
   }
}
