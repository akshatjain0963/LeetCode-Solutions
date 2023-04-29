            else if(g==5){
                return "9";
            }
            else{
                return "";
            }
        }
        int k=0;
        long long p=0;
        while(g>0){
            p=g;
            g -=pow(5,j-1);
            k +=1;
        }
        k -=1;
        k *=2;
        k +=1;
        string ans=to_string(k);
        return ans+solve(p,j-1);
    }
    long long findNumber(long long N){
    int j=0;
    long long g=0; 
    long long count=5;
    while(N>0){
        g=N;
        N -=count;
        count *=5;
        j +=1;
    }
    string x=solve(g,j);
    long long ans1=0;
    for(int k=0;k<x.size();k++){
        ans1 *=10;
        ans1 +=(x[k]-'0');
    }
    return ans1;
    }
};