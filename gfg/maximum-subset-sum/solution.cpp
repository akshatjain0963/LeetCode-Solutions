...// } Driver Code Ends
class Solution {
  public:
    long long findMaxSubsetSum(int n, vector<int> &a) {
        // code here
        vector<long long>dp(n,0);
        dp[0] = a[0];
        dp[1] = a[1] + max(0,a[0]);
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-1],dp[i-2]) + a[i];
        }
        return max(dp[n-1],dp[n-2]);
    }
};
...// } Driver Code Ends