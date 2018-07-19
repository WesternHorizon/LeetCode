//最快
bool containsDuplicate(vector<int>& nums) {
	if (nums.empty()) return false;
	sort(nums.begin(), nums.end());
	auto n = nums.size() - 1;
	for (decltype(n) i = 0; i < n; i++) {
		if (nums[i] == nums[i + 1]) return true;
	}
	return false;
}

bool containsDuplicate(vector<int>& nums) {
	set<int> s;
	for (auto n : nums) {
		if (s.find(n) != s.end()) return true;
		s.insert(n);
	}
	return false;
}