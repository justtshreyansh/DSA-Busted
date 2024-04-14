#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    TreeNode*left;
    TreeNode*right;
    int val;
    void dfs(TreeNode* root,int &sum){
        if(root->left!=NULL){
            if(root->left->left==NULL && root->left->right==NULL){
                sum+=root->left->val;
            }
            dfs(root->left,sum);
        }
        if(root->right!=NULL){
            dfs(root->right,sum);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        dfs(root,sum);
        return sum;
    }

};

int main(){
    return 0;
}