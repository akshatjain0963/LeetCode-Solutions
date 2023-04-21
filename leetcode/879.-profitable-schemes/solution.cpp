class Solution {
    long long mod=1e9+7;
public:
    int c(int n,int mp,vector<int>&v,vector<int>&p,int i,int tt,vector<vector<vector<int>>>&dp){
        
        if(i>=v.size() ){
            if(tt>=mp && n>=0)return 1;
            else return 0;
        }
        if(n<0)return 0;
        if(dp[n][i][tt]!=-1)return dp[n][i][tt];
        int ans=0;
            ans = c(n-v[i],mp,v,p,i+1,min(tt+p[i],mp),dp)%mod;
        
        ans = (ans%mod + c(n,mp,v,p,i+1,tt,dp)%mod)%mod;
        dp[n][i][tt]=ans;
        return ans;

    }
    int profitableSchemes(int n, int mp, vector<int>& v, vector<int>& p) {
          vector<vector<vector<int>>>dp(102,vector<vector<int>>(102,vector<int>(102,-1)));
       // vector<vector<int>>dp(n+1,vector<int>(v.size()+1,-1));
        return c(n,mp,v,p,0,0,dp);
    }
};