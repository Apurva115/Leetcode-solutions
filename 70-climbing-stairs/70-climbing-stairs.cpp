class Solution {
public:
    int dp[46] ={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int climbStairs(int n) {
        if( n ==1 )
        {
          dp[1] =1;
          return 1;  
        }
            
            
        if( n == 2)
        {
            dp[2] =2;
            return 2;
        }
        int c1,c2;
   
        if(dp[n-1] != -1)
        {
            c1 = dp[n-1];
        }
        else
        {
            c1 = climbStairs(n-1) +1;
            dp[n-1] = c1+1;
        }
        if(dp[n-2] != -1)
        {
            c2 = dp[n-2];
            
        }
        else
        {
            c2 = climbStairs(n-2)+ 2;
            dp[n-2]= c2+2;
        }
    
        dp[n]= c1+c2 -3;
        return c1+ c2 -3;
     
        
    }
};