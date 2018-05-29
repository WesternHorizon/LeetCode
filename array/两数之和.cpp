vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> m;
	int size = nums.size();

	m[nums[0]] = 0;
	for (int i = 1; i < size; i++) {
		int n = target - nums[i];
		if (m.find(n) != m.end()) {
			vector<int> result = { m[n],i };
			return result;
		}
		m[nums[i]] = i;
	}
}