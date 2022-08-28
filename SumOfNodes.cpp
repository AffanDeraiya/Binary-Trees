int getSum(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return 0;
  int sum=root->data;
return sum+getSum(root->left)+getSum(root->right);
    
}
