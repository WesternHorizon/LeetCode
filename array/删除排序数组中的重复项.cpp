int removeDuplicates(vector<int>& nums) {
	int len = nums.size();
	if (len == 0) return 0;
	int i = 0, j = 1;
	while (j < len) {
		if (nums[i] != nums[j]) {
			nums[++i] = nums[j];
		}
		j++;
	}
	return i + 1;
}