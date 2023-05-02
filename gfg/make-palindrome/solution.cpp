...// } Driver Code Ends
//User function Template for C++
class Solution{
public:
   bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int>mpp;
        for(auto it:arr) mpp[it]++;
        for(auto it:arr){
            reverse(it.begin(),it.end());
                mpp[it]--;
        }
        for(auto it:mpp){
            if(it.second!=0) return false;
        }
        return true;
    }
};
...// } Driver Code Ends