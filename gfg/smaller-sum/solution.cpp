...// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<long long> ans(n,0);
        vector<long long > prefix(n,0);
        vector<int > ele(arr); 
        sort(ele.begin(),ele.end());
        prefix[0]=ele[0];
        for(int i=1;i<n;i++)prefix[i]+=prefix[i-1]+ele[i];
        for(int i=0;i<n;i++)
        {
            int ind=lower_bound(ele.begin(), ele.end(), arr[i])-ele.begin();
            if(ele[ind]==arr[i])ind--;
            if(ind>=0)ans[i]=prefix[ind];
        }
        return ans;
    }
};
...// } Driver Code Ends