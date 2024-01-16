
class Solution{
public:
int solve(int index,int num,int m,int n)
{
    if(num>m || index>n)
    {
        return 0;
    }
    if(index==n)
    {
        if(num<=m)
        {
            return 1;
        }
        return 0;
    }
    
    int pick=0;
    for(int i=0;i<=m-num;i++)
    {
        if(2*num+i<=m)
        pick+=solve(index+1,2*num+i,m,n);
    }
    return pick;
    
}
    int numberSequence(int m, int n){
        // code here
        int count=0;
        for(int i=1;i<=m;i++)
        {
            count+=solve(1,i,m,n);
        }
        return count;
    }
};
