class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	 ull dp[n+1];
	    dp[0]=1;
	    int p1=0,p2=0,p3=0;
	    
	    for(int i=1;i<=n;i++){
	        ull mini = min(3*dp[p2],min(2*dp[p1],5*dp[p3]));
	        dp[i]=mini;
	        if(2*dp[p1]==mini) p1++;
	        if(3*dp[p2]==mini) p2++;
	        if(5*dp[p3]==mini) p3++;
	        
	    }
	    return dp[n-1];
	}
};
