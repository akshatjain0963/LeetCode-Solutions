class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        vector<int>a;
        for(int i=0;i<v.size();i++){
            int in=lower_bound(a.begin(),a.end(),v[i])-a.begin();
            if(in>=a.size())a.push_back(v[i]);
            else a[in]=v[i];
        }
        return a.size();
    }
};