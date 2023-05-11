                    l++;
                    r--;
                }
                else if (s[r]=='?' && s[l]!='?')
                {
                    s[r]=s[l];
                    r--;
                    l++;
                }
                else if (s[l]=='?' && s[r]=='?')
                {
                    if(l>0 && r<s.size()-1)
                    {
                        s[l]=s[l-1];
                        s[r]=s[r+1];
                        l++;
                        r--;
                    }
                    
                    else if (l==0 && r == s.size()-1)  // when starting and ending '?' '?' don't do anything...
                    {
                        l++;
                        r--;
                    }
                }
            }
        }
        
        int ans=0;
        
        for(i=0;i<s.size();i++)
        {
            if(i+1 < s.size())
            {
                if(s[i]!='?' && s[i+1]!='?')
                ans+=abs(s[i]-s[i+1]);
            }
        }