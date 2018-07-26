int maxDepth(TreeNode* root) {
	if (root == nullptr) return 0;
	int dLeft = maxDepth(root->left);
	int dRight = maxDepth(root->right);
	return 1 + (dLeft > dRight ? dLeft : dRight);
}