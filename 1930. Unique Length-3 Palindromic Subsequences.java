class Solution {
    public int countPalindromicSubsequence(String s) {
        int count[][] = new int[26][2];
        boolean cnt[][] = new boolean[26][26];
        int al[] = new int[26];
        Arrays.fill(al,-1);
        for(int c[] : count){
            Arrays.fill(c, -1);
        }
        for(int i = 0 ; i < s.length(); i++){
            if(count[s.charAt(i) - 'a'][0] == -1){
                count[s.charAt(i) - 'a'][0] = i;
            }
            else{
                count[s.charAt(i) - 'a'][1] = i;
            }
        }

        // for(int x[] : count){
        //     System.out.println(Arrays.toString(x));
        // }

        for(int i = 0 ; i < s.length(); i++){
            // System.out.println(Arrays.toString(al));
            if(count[s.charAt(i) - 'a'][1] == i){
                for(int j = 0; j < 26; j++){
                    if(al[j] > count[s.charAt(i) - 'a'][0] && al[j] < count[s.charAt(i) - 'a'][1]){
                        cnt[s.charAt(i) - 'a'][j] = true;

                    }
                }
            }
            al[s.charAt(i) - 'a'] = i;
        }
        int tot = 0;
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < 26; j++){
                if(cnt[i][j]){tot++;}
            }
        }
        return tot;
    }
}
