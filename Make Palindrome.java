class Solution {
    public static boolean makePalindrome(int n, String[] arr) {
       int isPal  = 0;
       HashMap<String, Integer> hm = new HashMap<>();
       for(String str : arr){
           hm.put(str, hm.getOrDefault(str, 0)+1);
       }
       boolean foundOddPalin = false;
       for(String str : arr){
           if(hm.containsKey(str)){
            //   System.out.println(str);
               if(isPalin(str)){
                   if(hm.get(str)%2 == 1){
                       if(!foundOddPalin) foundOddPalin = true;
                       else return false;
                   }
                       hm.remove(str);
               }else{
                  String rev = new StringBuilder(str).reverse().toString();
                   
            //   System.out.println(str+"  "+rev);
                   if(!hm.containsKey(rev)){
                       return false;
                   }else{
                       if(hm.get(str) != hm.get(rev)){
                           return false;
                       }
                   }
                       hm.remove(str);
                       hm.remove(rev);
               }
           }
       }
       return true;
        // code here
    }
     public static boolean isPalin(String str) {
        int l = 0, h = str.length()-1;
        while(l<h){
            if(str.charAt(l) != str.charAt(h)){
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
}
