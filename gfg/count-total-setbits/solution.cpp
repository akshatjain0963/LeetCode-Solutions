...// } Driver Code Ends
class Solution {
  public:
    long long countBits(long long N) {
              long long int a = 2;
        long long int ans = 0;
        while(a/2<=N){
            long long int ele,rem;
            ele = ((N+1)/a)*(a/2);
            ans = ans + ele;
            rem = (N+1)%a;
            if(rem>(a/2)){
                ans = ans + (rem-(a/2));
            }
            a = a*2;
        }
        return ans;
    }
};
...// } Driver Code Ends