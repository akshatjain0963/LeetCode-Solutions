...// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
           int len=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0 && len>0)
            {
                count++;
                len=0;
            }
            else if(arr[i]!=0)
            {
                len++;
            }
        }
         if(len>0)
         {
             count++;
         }
         return count;
    }
};
...// } Driver Code Ends