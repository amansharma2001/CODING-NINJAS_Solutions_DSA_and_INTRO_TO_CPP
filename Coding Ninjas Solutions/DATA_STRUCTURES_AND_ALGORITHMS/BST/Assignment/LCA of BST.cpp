int getLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
    // Write your code here
    if (root == NULL)
        return -1;
    if (root->data == val1 || root->data == val2)
        return root->data;

    int left = getLCA(root->left, val1, val2);
    int right = getLCA(root->right, val1, val2);

    if (left == -1 && right == -1)
        return -1;
    else if (left != -1 && right == -1)
        return left;
    else if (left == -1 && right != -1)
        return right;
    else
        return root->data;
}