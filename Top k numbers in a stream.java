    
class Solution {     
    public static ArrayList<ArrayList<Integer>> kTop(int[] arr, int n, int k) {
        
        ArrayList<ArrayList<Integer>> list=new ArrayList<>();
        Map<Integer,Integer> map=new HashMap<>();
        
        for(int i:arr)
        {
            ArrayList<Integer> a=new ArrayList<>();
            map.put(i,map.getOrDefault(i,0)+1);
            
            PriorityQueue<Integer> pq=new PriorityQueue<>((x,y)->{
                if(map.get(x) == map.get(y))
                    return x - y;
                return map.get(y) - map.get(x);
            });
            
            for(int key:map.keySet())
                pq.add(key);
            
            int c=0;
            while(!pq.isEmpty())
            {
                if(c<k)
                {
                    a.add(pq.peek());
                    c++;
                }
                pq.poll();
            }
            list.add(a);
        }
        return list;
    }
}  
