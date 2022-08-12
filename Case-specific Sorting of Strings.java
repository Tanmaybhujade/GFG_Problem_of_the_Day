class Solution
{
    //Function to perform case-specific sorting of strings.
    public static String caseSort(String str)
    {
        StringBuilder res=new StringBuilder();
       char c[]=str.toCharArray();
       Arrays.sort(c);
       String d=new String(c);
       int u=-1;
       int l=-1;
       if (Character.isUpperCase(c[0])){
           u=0;
       }
       for (int i=0;i<d.length();i++){
           if (Character.isLowerCase(d.charAt(i))){
               l=i;
               break;
           }
       }
       if (u==-1 || l==-1){
           return d;
       }
       for (int i=0;i<str.length();i++){
           if (Character.isLowerCase(str.charAt(i))){
               res.append(d.charAt(l));
               l++;
           }
           if (Character.isUpperCase(str.charAt(i))){
               res.append(d.charAt(u));
               u++;
           }
       }
       return res.toString();
   
    }
}
