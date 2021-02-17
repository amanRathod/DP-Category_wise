
class Solution {
public:
    int numSquares(int n) {
//            	int* dp = new int[n + 1];

// 	// getMinSquares table 
// 	// for base case entries
// 	dp[0] = 0;
// 	dp[1] = 1;
// 	dp[2] = 2;
// 	dp[3] = 3;
//     if(n <= 3) return dp[n];
// 	// getMinSquares rest of the 
// 	// table using recursive
// 	// formula
// 	for (int i = 4; i <= n; i++) 
// 	{
		
// 		// max value is i as i can 
// 		// always be represented
// 		// as 1*1 + 1*1 + ...
// 		dp[i] = i;

// 		// Go through all smaller numbers to
// 		// to recursively find minimum
// 		for (int x = 1; x <= ceil(sqrt(i)); x++) 
// 		{
// 			int temp = x * x;
// 			if (temp > i)
// 				break;
// 			else
// 				dp[i] = min(dp[i], 1 + 
// 								dp[i - temp]);
// 		}
// 	}
//         	// Store result and free dp[]
// 	int res = dp[n];
// 	delete[] dp;

// 	return res;
        
           if (n <= 0)
        {
            return 0;
        }
        
        // cntPerfectSquares[i] = the least number of perfect square numbers 
        // which sum to i. Note that cntPerfectSquares[0] is 0.
        vector<int> cntPerfectSquares(n + 1, INT_MAX);
        cntPerfectSquares[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            // For each i, it must be the sum of some number (i - j*j) and 
            // a perfect square number (j*j).
            for (int j = 1; j*j <= i; j++)
            {
                cntPerfectSquares[i] = 
                    min(cntPerfectSquares[i], cntPerfectSquares[i - j*j] + 1);
            }
        }
        
        return cntPerfectSquares.back();
    
    
    }
};
