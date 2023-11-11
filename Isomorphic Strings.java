class Solution
{
    
    public static boolean areIsomorphic(String str1,String str2)
    {
        //if length ob both string is not same then return false
        if(str1.length()!= str2.length()){
            return false;
        }
        
        //check both string 
        boolean first = check(str1,str2);
        boolean second = check(str2,str1);
        return (first && second);
    }
    public static boolean check(String str1,String str2){
        HashMap<Character,Character> map = new HashMap<>();
        for(int i=0;i<str1.length();i++){
            if(!map.containsKey(str1.charAt(i))){
                map.put(str1.charAt(i),str2.charAt(i));
            }else{
                if(map.get(str1.charAt(i)) != str2.charAt(i)){
                    return false;
                }
            }
        }
        return true;
    }
}
