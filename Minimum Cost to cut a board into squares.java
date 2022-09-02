class Solution {
  public static int minimumCostOfBreaking(int[] X, int[] Y, int M, int N) {
    int cost = 0;
    int h = 1, v = 1;
    Arrays.sort(X); // sort the horizontal Array
    Arrays.sort(Y); // sort the vertical Array
    int i = X.length - 1;//Element present in horizontal X[]
    int j = Y.length - 1;//Element present in horizontal Y[]

    while (i >= 0 && j >= 0) {
      if (X[i] >= Y[j]) {
        cost += X[i] * v;
        h++;
        i--;
      } 
      else{
        cost += Y[j] * h;
        v++;
        j--;
      }
    }
    while (i >= 0) {
      cost += X[i] * v;
      i--;
    }
    while (j >= 0) {
      cost += Y[j] * h;
      j--;
    }
    return cost;
  }
}
