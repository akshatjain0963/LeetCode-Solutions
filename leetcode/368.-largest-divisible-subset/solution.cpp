class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        vector<int>dp(n,1),ans(n);
        int mx=0;
        int in=0;
        for(int i=0;i<n;i++){
            ans[i]=i;
            for(int j=0;j<i;j++){
                if(v[i]%v[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        ans[i]=j;
                        if(mx<dp[i]){
                            mx=dp[i];
                            in=i;
                        }
                    }
                }
            }
        }
        vector<int>f;
        while(ans[in]!=in){
            f.push_back(v[in]);
            in=ans[in];
        }
        f.push_back(v[in]);
        reverse(f.begin(),f.end());
        return f;

    }
};