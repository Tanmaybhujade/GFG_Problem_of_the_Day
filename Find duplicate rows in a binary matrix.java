class Solution
{
    public static ArrayList<Integer> repeatedRows(int matrix[][], int m, int n)
    {
        //code here
        ArrayList<Integer> list = new ArrayList<>();
        HashMap<List<Integer>, Integer> hmap = new HashMap<>();
        
        for(int i=0; i< m; i++){
            List<Integer> row = new ArrayList<>();
            for(int j=0; j<n; j++){
                row.add(matrix[i][j]);
            }
            if(hmap.containsKey(row)){
                list.add(i);
            }
            hmap.put(row,i);
        }
        return list;
    }
}
