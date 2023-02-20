class Solution{
	public static int countPaths(int N){
		//code here
		    
    long M = 1000000007;
		long o = 0, a = 1, b = 1, c = 1;
		
		for(int i = 2; i <= N; i++) {
		    long ways2Origin = (a+b+c)%M;
		    long ways2A = (o+b+c)%M;
		    long ways2B = (o+a+c)%M;
		    long ways2C = (o+a+b)%M;
		    o = ways2Origin;
		    a = ways2A;
		    b = ways2B;
		    c = ways2C;
		}
		return (int)o;
	}
}
