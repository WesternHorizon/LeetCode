int singleNumber(int* nums, int numsSize) {
	int *pend = nums + numsSize;
	int m = 0;

	while (nums != pend)
		m ^= *nums++;  //真·骚操作，同一个数异或2次为0，全部数都与0异或，最终剩下的就是只出现一次的
	return m;
}


int singleNumber(vector<int>& nums) {
	map<int, size_t> num_count;

	for (auto &n : nums)
		num_count[n]++;

	for (auto &n : num_count)
		if (n.second == 1)
			return n.first;
}