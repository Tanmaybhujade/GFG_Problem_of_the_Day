
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            int ans=0;
            queue<int>q;
           int su=n/2+n/3+n/4;
           if(su<=n){
                  return n;
                }
            q.push(n/2);
            q.push(n/3);
            q.push(n/4);
            while(q.size()>0){
                n=q.front();
                int t=n/2+n/3+n/4;
              if(t<=n){
                  ans+=n;
                }
                else{
                    q.push(n/2);
                    q.push(n/3);
                    q.push(n/4);
                    
                }
                 q.pop();
                
            }
            return ans;
        }
};
