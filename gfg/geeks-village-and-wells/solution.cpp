                }else if(mat[i][j] == 'N'){
                    res[i][j] = -1;
                }else{
                    res[i][j] = 1;
                }
            }
        }
        
        
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            
            int row = front.first;
            int col = front.second;
            
            for(int x = 0; x < 4; ++x){
                int r = drow[x] + row;
                int c = dcol[x] + col;
                
                if(in_range(r, c, n, m) && !vis[r][c] && res[r][c] == 1){
                    res[r][c] = res[row][col] + 2;
                    vis[r][c] = true;
                    q.push({r,c});
                }
            }
        }
            
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(res[i][j] == -1 || mat[i][j] == '.') res[i][j] = 0;
                else if(res[i][j] == 1) res[i][j] = -1;
            }
        }
            
            
        return res;
    }
};