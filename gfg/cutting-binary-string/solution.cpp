class Solution{
    public:
    long long dp[51][51];
    long long fun(int i,int j,string&s){
        if(i==s.size()&&j==s.size()) return 0;
        if(i<s.size()&&j>=s.size()) return 1e4+0;
        if(dp[i][j]!=-1) return dp[i][j];
        long long val=0;
        int cnt=0;
        
        for(int k=j;k>=i;k--){
            if(s[k]=='1'){
                val+=(powl(2,cnt));
            }
            cnt++;
        }
         bool bl=true;
        if(val==0||s[i]=='0') bl=false;
        while(val>1){
            if(val%5) bl=false;
            val/=5;
        }
        
        int ans=0;
        if(bl)  ans=min(1+fun(j+1,j+1,s),fun(i,j+1,s));
            
        else  ans=fun(i,j+1,s);
        return dp[i][j]=ans;
   }
    int cuts(string s){
        memset(dp,-1,sizeof(dp));
        int val= fun(0,0,s);
        if(val>=1e4)val=-1;
        return val;
    }
};
...// } Driver Code Ends