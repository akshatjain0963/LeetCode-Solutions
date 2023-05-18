                                matrix[nx][ny]=0;
                                q.push({nx,ny});
                            }
                        }
                    }
                }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]){
                    ans++;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(q.size()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        int dx[4]={1,-1,0,0};
                        int dy[4]={0,0,1,-1};
                        for(int k=0;k<4;k++){
                            int nx=dx[k]+x;
                            int ny=dy[k]+y;
                            if(nx>=0 && ny>=0 && nx<n && ny<m && matrix[nx][ny]){
                                matrix[nx][ny]=0;
                                q.push({nx,ny});
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};
...// } Driver Code Ends