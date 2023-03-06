class Solution {
    public static int noConseBits(int n) {
         StringBuilder str = new StringBuilder(Integer.toBinaryString(n));

        int i=0,j=0,sum=0;

        while(j<str.length()){

           if(j<3){

              sum+=str.charAt(j)-'0';

           }

           else{

            sum+=str.charAt(j)-'0';

            sum-=str.charAt(i)-'0';

            i++;

           }

           if(sum==3){

              str.setCharAt(j,'0');  

              sum-=1;

            }

            j++;

        }

        return Integer.valueOf(str.toString(),2);

    }
}
  
