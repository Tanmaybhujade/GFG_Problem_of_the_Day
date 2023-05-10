//{ Driver Code Starts
import java.io.*;
import java.util.*;


class IntArray
{
    public static int[] input(BufferedReader br, int n) throws IOException
    {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = Integer.parseInt(s[i]);

        return a;
    }

    public static void print(int[] a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }

    public static void print(ArrayList<Integer> a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int N;
            N = Integer.parseInt(br.readLine());
            
            
            int K;
            K = Integer.parseInt(br.readLine());
            
            
            int[] A = IntArray.input(br, N);
            
            Solution obj = new Solution();
            int res = obj.totalCuts(N, K, A);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends




public class Solution {
    public int totalCuts(int N, int K, int[] A) {
        int[] leftMax = new int[N];
        int[] rightMin = new int[N];

        // Pre-compute maximum element on the left of i-th element
        leftMax[0] = A[0];
        for (int i = 1; i < N; i++) {
            leftMax[i] = Math.max(leftMax[i - 1], A[i]);
        }

        // Pre-compute minimum element on the right of i-th element
        rightMin[N - 1] = A[N - 1];
        for (int i = N - 2; i >= 0; i--) {
            rightMin[i] = Math.min(rightMin[i + 1], A[i]);
        }

        int cuts = 0;
        for (int i = 0; i < N - 1; i++) {
            if (leftMax[i] + rightMin[i + 1] >= K) {
                cuts++;
            }
        }

        return cuts;
    }
}
        
