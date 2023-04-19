class Solution {
public:
    int findNumberOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int>dp(n,1);
        int mx=1;
        vector<int>ct(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[i]>v[j]){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        ct[i]=ct[j];
                    }
                    else if(dp[i]==dp[j]+1){
                        ct[i]+=ct[j];
                    }
                }
                mx=max(mx,dp[i]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            cout<<ct[i]<<" ";
            if(dp[i]==mx)ans+=ct[i];
        }
        return ans;
    }
};