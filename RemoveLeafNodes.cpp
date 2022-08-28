BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    
	if(root->left==NULL && root->right==NULL)
    {
        delete root;
        return NULL;
    }
    
    if(root->left)
        root->left=removeLeafNodes(root->left);
    if(root->right)
        root->right=removeLeafNodes(root->right);
    
    return root;
}
