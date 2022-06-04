#include<bits/stdc++.h>

int minSumPath(vector<vector<int>> &grid) {
	int m = grid.size();
    int n = grid[0].size();
    int dp[m+1][n+1];
    for(int i = 0; i < m; i++)
    {
			for(int j = 0; j < n; j++)
            {
                if(i==0&&j==0)
                    dp[i][j]=grid[i][j];
                else
                {
    					int up = 1e9, left = 1e9;
    					if(i>0) up = grid[i][j] + dp[i-1][j];
    					if(j>0) left = grid[i][j] + dp[i][j-1];
    					dp[i][j] = min(up,left);
                }
            }
    }
    int minCost = dp[m-1][n-1];
    return minCost;
}
