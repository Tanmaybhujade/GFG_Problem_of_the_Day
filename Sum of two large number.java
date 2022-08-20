class Solution {
    String findSum(String X, String Y) {
         int i=0;
        while(i<X.length()){
            if(X.charAt(i)!='0') break;
            i++;
        }
        
        if(i!=X.length()){
            X=X.substring(i,X.length());
        }else{
            X="0";
        }
        i=0;
        while(i<Y.length()){
            if(Y.charAt(i)!='0') break;
            i++;
        }
        if(i!=Y.length()){
            Y=Y.substring(i,Y.length());
        }else{
            Y="0";
        }
        
        int x=X.length()-1,y=Y.length()-1;
        
        // System.out.println(X +" "+Y);
        StringBuilder ans=new StringBuilder();
        int carry=0;
        while(x>=0 && y>=0){
            int add=X.charAt(x)-'0'+Y.charAt(y)-'0'+carry;
            carry=add/10;
            ans.append(add%10);
            x--;
            y--;
        }
        while(x>=0){
            int add=X.charAt(x)-'0'+carry;
            carry=add/10;
            ans.append(add%10);
            x--;
        }
        while(y>=0){
            int add=Y.charAt(y)-'0'+carry;
            carry=add/10;
            ans.append(add%10);
            y--;
        }
        
        if(carry!=0){
            ans.append(carry);
        }
        ans.reverse();
        return ans.toString();
    }
}
