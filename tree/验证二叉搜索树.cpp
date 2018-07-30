//方法1
//主函数，调用下方重载函数
bool isValidBST(TreeNode* root) {
	if (root == nullptr) return true;
	return isValidBST(root, LONG_MIN, LONG_MAX);
}

bool isValidBST(TreeNode* root, long vmin, long vmax) {
	if (root == nullptr) return true;
	if (root->val <= vmin || root->val >= vmax) return false;
	return isValidBST(root->left, vmin, root->val) && isValidBST(root->right, root->val, vmax);
}

//方法2，中序遍历保存结果，验证结果是否升序
void readBST(TreeNode* root, vector<int> &l) {
	if (root == nullptr) return;
	readBST(root->left, l);
	l.push_back(root->val);
	readBST(root->right, l);
}

bool isValidBST(TreeNode* root) {
	if (root == nullptr) return true;
	vector<int> l;
	readBST(root, l);
	int len = l.size() - 1;
	for (int i = 0; i < len; i++) {
		if (l[i] >= l[i + 1]) return false;
	}
	return true;
}