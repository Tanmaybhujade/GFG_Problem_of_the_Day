class Solution 
{ 
    static long solve(int X,int Y, String S)
	{    
	    // code here
	    Stack<Character> st = new Stack<>();
        long cnt_pr = 0 , cnt_rp = 0;
        char a = 'p' , b = 'r';
        if(Y > X){
            a = 'r';
            b = 'p';
            int temp = X;
            X = Y;
            Y = temp;
        }
        for(int i=0;i<S.length();i++){
            if(!st.isEmpty() && st.peek() == a && S.charAt(i) == b){
                st.pop();
                cnt_pr++;
            }
            else{
                st.push(S.charAt(i));
            }
        }
        StringBuilder sb = new StringBuilder();
        while(!st.isEmpty()){
            sb.insert(0,st.pop());
        }
        // Now checking count of rp
        for(int i=0;i<sb.length();i++){
            if(!st.isEmpty() && st.peek() == b && sb.charAt(i) == a){
                st.pop();
                cnt_rp++;
            }
            else{
                st.push(sb.charAt(i));
            }
        }
        long ans = (X*cnt_pr)+(Y*cnt_rp);
        return ans;
	}
} 
