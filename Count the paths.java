
class Solution
{
    public int possible_paths(int[][] edges, int n, int s, int d)
    {
          int count=0;
       if(s==d)
       return 1;
       for(int i=0;i<edges.length;i++)
       {
           if(edges[i][0]==s)
           {
               s=edges[i][1];
               count+=possible_paths(edges,n,s,d);
               s=edges[i][0];
           }
       }
       return count;
    }
}
