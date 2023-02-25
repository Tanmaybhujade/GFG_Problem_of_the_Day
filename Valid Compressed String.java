class Solution {

    static int checkCompressed(String S, String T) {

        // code here

        

        if(S.length()==0 && T.length()==0){

            return 1;

        }

        if(S.length()==0 || T.length()==0){

            return 0;

        }

        int j = 0;

        for(int i = 0;i<T.length();i++){

            char c = T.charAt(i);

            if(c>='A' && c<='Z'){

                if(c == S.charAt(j))j++;

                else return 0;

            }else{

                String s = "";

                while(c>='0' && c<='9'){

                    s = s+c;

                    i++;

                    if(i<T.length()) c = T.charAt(i);

                    else break;

                }

                if(!(c>='0' && c<='9')) i--;

                

                int ind = Integer.valueOf(s);

                j = j+ind;

                if(j>S.length()) return 0;

                

            }

        }

    

        return 1;

    }

}
