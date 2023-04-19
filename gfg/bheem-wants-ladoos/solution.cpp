...// } Driver Code Ends
/*
// node structure:
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution{
    public:
    void markParent(Node* root,unordered_map<Node*,Node*>&parent,
    int target,Node* &tar){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                Node *temp=q.front();
                q.pop();
                if(temp->data==target){
                    tar=temp;
                }
                if(temp->left){
                    q.push(temp->left);
                    parent[temp->left]=temp;
                }
                if(temp->right){
                    q.push(temp->right);
                    parent[temp->right]=temp;
                }
            }