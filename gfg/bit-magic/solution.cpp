...// } Driver Code Ends
class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
       int ans=0;
       for(int i=0;i<arr.size()/2;i++)if(arr[i]!=arr[n-1-i])ans++;
    
    return (ans+1)/2;
}
};
...// } Driver Code Ends