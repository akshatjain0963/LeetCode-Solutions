        }
 
        // compute the minimum element on the right side of each cut
        vector<int> min_right(N);
        min_right[N-1] = A[N-1];
        for(int i=N-2;i>=0;i--){
            min_right[i] = min(min_right[i+1], A[i]);
        }
 
        // count the number of cuts that satisfy the conditions
        int count = 0;
        for(int i=0;i<N-1;i++){
            if(max_left[i] + min_right[i+1] >= K){
                count++;
            }
        }
 
        return count;
    }
};
...// } Driver Code Ends