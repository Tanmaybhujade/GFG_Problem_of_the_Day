
class Solution{
    static int maxLength(String S){
        // code here
         Stack<Character> st = new Stack<>();
        Stack<Integer> index = new Stack<>();
        index.push(-1);
        
        int ans = 0;
        
        for(int i = 0; i < S.length(); i++) {
            char ch = S.charAt(i);
            
            if(ch == '(') {
                index.push(i);
                st.push(ch);
            }
            
            else if(ch == ')' && !st.isEmpty()) {
                st.pop();
                index.pop();
                ans = Math.max(ans, i - index.peek());
            } 
            
            else index.push(i);
        }
        
        return ans;
    }
}
