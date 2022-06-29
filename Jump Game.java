class Solution {
    static int canReach(int[] A, int N) {
         return isReached(A, 0)==true?1:0;
    }
    static boolean isReached(int []A, int ind) {
        if(ind>=A.length) return false;
        if(ind==A.length-1) return true;
        
        for(int j=A[ind];j>0;j--) {
            boolean k=isReached(A, ind+j);
            if(k) return true;
        }
        return false;
    }
};
