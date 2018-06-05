//未使用map，排序数组
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	vector<int> result;
	int len1 = nums1.size();
	int len2 = nums2.size();
	
	if (len1 == 0 || len2 == 0)
		return result;
	
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	
	int i, j;
	i = j = 0;
	while (i < len1 && j < len2) {
		if (nums1[i] < nums2[j]) i++;
		else if (nums1[i] > nums2[j]) j++;
		else {
			result.push_back(nums1[i]);
			i++;
			j++;
		}
	}
	return result;
}

//使用map，不排序数组
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	map<int, int> map1;
	for (auto &n1 : nums1)
		map1[n1]++;

	vector<int> result;
	for (auto &n2 : nums2) {
		auto iter = map1.find(n2);
		if (iter == map1.end()) continue;
		if (iter->second == 0) continue;
		iter->second--;
		result.push_back(iter->first);
	}
	return result;
}