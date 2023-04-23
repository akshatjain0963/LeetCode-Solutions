...// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        // Code here
         if(n<=1) return 0;
        int ans;
        ans=arr[0];
        for(int i=1; i<n; i++){
            ans=__gcd(ans,arr[i]);
        }
        return ans;
    }
};
...// } Driver Code Ends