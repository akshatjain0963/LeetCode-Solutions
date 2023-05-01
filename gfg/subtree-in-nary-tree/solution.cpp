class Solution{
public:
   unordered_map<string,int> mp;
void help(Node *root,string &a)
{
    if(!root)
    return;
    a+=to_string(root->data);
    for(int i=0;i<root->children.size();i++)
    {
        if(!root->children[i])
        a+="-1";
        else
        {
            string temp="";
            help(root->children[i],temp);
            a+=temp;
        }
    }
    mp[a]++;
    return ;
}
    int duplicateSubtreeNaryTree(Node *root){
        // Code here
        mp=unordered_map<string,int> ();
        string t="";
        help(root,t);
        auto itr=mp.begin();
        int count=0;
        while(itr!=mp.end())
        {
            if(itr->second>1)
            count++;
            itr++;
        }
        return count;
    }
};