            }
            mp[i]=mask;
        }
    }
    long pow(int n){
        long ans=1, m=2;
        while(n!=0){
            if(1 == (n&1)) ans=(ans*m)%mod;
            m=m*m%mod;
            n>>=1;
        }
        return ans;
    }
    int goodSubsets(vector<int> &arr, int n){
        int one=0;
        vector<int> dp(1024), cnt(31);
        dp[0] =1;
        for(int i: arr){
            if(i == 1)
                one++;
            else if(mp[i]!=0)
                cnt[i]++;
        }
        
        for(int i=0; i<31; ++i){
            if(cnt[i] == 0) continue;
            for(int j=0; j<1024; ++j){
                if(0 != (j &mp[i]) ) continue;
                dp[j | mp[i]] = 
                    (int) ((dp[j | mp[i]] + dp[j] * (long)cnt[i]) % mod);
            }
        }
        long ans=0; 
        for(int i:dp) ans = (ans+i) % mod;
        ans--;
        if(one!=0) ans=ans*pow(one)%mod;
        return (int)ans;
    }
};