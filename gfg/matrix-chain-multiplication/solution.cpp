...// } Driver Code Ends
// User function Template for C++
class Solution{
public:
    int c(int i,int j,int arr[],vector<vector<int>>&dp){
        if(i==j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
            int s=arr[i-1]*arr[k]*arr[j]+c(i,k,arr,dp)+c(k+1,j,arr,dp);
            ans=min(ans,s);
        }
        dp[i][j]=ans;
        return ans;
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=n-1;i>=1;i--){
            for(int j=i+1;j<n;j++){
                int mx=INT_MAX;
                for(int k=i;k<j;k++){
                    int s=arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
                    mx= min(mx,s);
                }
                dp[i][j]=mx;
            }
        }
        return dp[1][n-1];
    }
};
...// } Driver Code Ends