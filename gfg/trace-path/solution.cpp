...// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int isPossible(int n, int m, string s){
        int cmin, rmin, cmax, rmax, i, j;
        cmin = rmin = cmax = rmax = i = j = 0;
        for(auto e: s) {
            if(e == 'U') i++;
            else if(e == 'D') i--;
            else if(e == 'R') j++;
            else j--;
            
            rmin = min(rmin, i), rmax = max(rmax, i);
            cmin = min(cmin, j), cmax = max(cmax, j);
        }
        return (rmax + abs(rmin) < n) && (cmax + abs(cmin) < m);
    }
};
...// } Driver Code Ends