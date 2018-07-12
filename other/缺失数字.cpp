//leetcode认为最快的版本
int missingNumber(vector<int>& nums) {
	int len = nums.size();
	int sum = (len + 1)*len / 2;
	int rsum = accumulate(nums.begin(), nums.end(), 0);
	return sum - rsum;
}

int missingNumber(vector<int>& nums) {
	int len = nums.size();
	int res = 0;
	for (int i = 0; i <= len; i++)
		res ^= i;
	for (auto n : nums)
		res ^= n;
	return res;
}

//初次版本
int missingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int i = 0;
	while(1) {
		if (i != nums[i]) return i;
		i++;
	}
}