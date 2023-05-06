class Solution {
public:
    int numSubseq(vector<int>& v, int tar) {
        sort(v.begin(),v.end());
        long long ans=0;
        long long md=1e9+7;
        vector<int>pw;
        int p=1;
        for(int i=0;i<v.size()+1;i++){
              pw.push_back(p);
              p=(p*2)%md;
        }
        int i=0;int j=v.size()-1;
        while(i<=j){
          if(v[j]+v[i]>tar){
            j--;
          }
          else {
            ans+=pw[(j-i)];
            ans%=md;
            i++;
          }
          
        }
        return ans;
    }
};