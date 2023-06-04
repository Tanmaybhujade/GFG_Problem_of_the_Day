class Solution
{
  public:
    string reverseEqn (string s){
      stack<string> st;
                string temp = "";
                string ans = "";
                for(char i : s){
                    if(i == '+' || i == '-' || i == '*' || i == '/'){
                        st.push(temp);
                        st.push({i});
                        temp = "";
                    }
                    else temp += i;
                }
                st.push(temp);
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                return ans;
            }
};
