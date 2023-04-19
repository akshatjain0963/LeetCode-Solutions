class Solution {
public:
    int longestStrChain(vector<string>& words) {
        vector<pair<int,string>>v;
        for(int i=0;i<words.size();i++){
            v.push_back({words[i].size(),words[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            words[i]=v[i].second;
        }
        int mx=1;
        vector<int>dp(words.size(),1);
        for(int i=0;i<words.size();i++){
            for(int j=0;j<i;j++){
                if(words[i].size()==(words[j].size()+1)){
                    int ct=0;
                    int i1=0,i2=0;
                    while(i1<words[i].size() && i2<words[j].size()){
                        if(words[i][i1]==words[j][i2]){
                            i1++;
                            i2++;
                        }
                        else {
                            i1++;
                            ct++;
                        }
                    }
                    if(ct<=1){
                        dp[i]=max(dp[i],dp[j]+1);
                        mx=max(mx,dp[i]);
                    }
                }
            }
        }
        return mx;
    }
};