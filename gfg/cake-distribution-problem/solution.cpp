...// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int maxSweetness(vector<int>& sweetness, int N, int K){ 
  // Initializing left and right boundaries of binary search
    int l = 1, r = 1e9, ans = 0;
    // Binary search loop
    while (l <= r) {
     // Computing middle index of current search interval
        int mid = (l + r) / 2;
        // Iterating over sweetness array to count number of pieces
        int pieces = 0, currSweetness = 0;
        for (int i = 0; i < N; i++) {
            currSweetness += sweetness[i];
            if (currSweetness >= mid) {
                pieces++;
                currSweetness = 0;
            }
        }
        // Checking if current sweetness level is valid
        if (pieces >= K + 1) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    // Returning maximum sweetness
    return ans;