
void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    
    if(root==NULL)
        return;
    
    if(root->left && !root->right)
    {  cout<<root->left->data;
    
       printNodesWithoutSibling(root->left); 
    }
     else if(!root->left && root->right)
    {  cout<<root->right->data<<" ";
    
       printNodesWithoutSibling(root->right); 
    }
	else 
    {
        printNodesWithoutSibling(root->left); 
        printNodesWithoutSibling(root->right); 
    }
}
