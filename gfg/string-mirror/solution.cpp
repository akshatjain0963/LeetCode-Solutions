...// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    string stringMirror(string str){
        // Code here
         string s="",f;
        s+=str[0];
        for(int i=1;i<str.size();i++){
            if(s[i-1]>str[i]){
                s+=str[i];
            }
            else if(s[i-1]==str[i]){
                if(s.size()==1)break;
                s+=str[i];
            }
            else break;
        }
        f+=s;
        reverse(s.begin(),s.end());
        f+=s;
        return f;
    }
};
...// } Driver Code Ends