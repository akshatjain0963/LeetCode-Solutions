...// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
         int count=0;
       for(auto &i:s2){
           for(auto &j:s1){
               if(j.find(i)<j.size()){
                   count++;
                   break;
               }
           }
       }
       return count;
    }
};
...// } Driver Code Ends