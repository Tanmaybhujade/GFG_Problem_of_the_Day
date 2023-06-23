class Solution {
    static int leastInterval(int N, int K, char tasks[]) {
        Map<Character,Integer> map = new HashMap<>();
        for(int i=0;i<N;i++){
            if(map.containsKey(tasks[i])) map.put(tasks[i],map.get(tasks[i])+1);
            else map.put(tasks[i],1);
        }
        int max=-1,count=0;
        for(HashMap.Entry<Character,Integer> i:map.entrySet()){
            if(i.getValue()==max) count++;
            else if(i.getValue()>max) {
                max=i.getValue();
                count=1;
            }
        }
        return Math.max(N,max+(max-1)*K+count-1);
    }
}
