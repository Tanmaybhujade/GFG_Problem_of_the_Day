class Solution
{
    ArrayList <Integer> nearlySorted(int arr[], int num, int k)
    {
         ArrayList <Integer> res=new ArrayList <Integer>();
        Queue<Integer> p=new PriorityQueue<>();
        for(int i=0;i<=k;i++)
        {
            p.add(arr[i]);
        }
        for(int j=k+1;j<arr.length;j++)
        {
            res.add(p.remove());
            p.add(arr[j]);
        }
        while(p.size()>0)
        {
            res.add(p.remove());
        }
        return res;
    }
}
