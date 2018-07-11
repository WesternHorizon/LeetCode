int climbStairs(int n) {
	if (n < 3) return n;

	int cur = 0;
	int n1 = 1;
	int n2 = 2;
	int i = 2;
	for (; i < n; i++) {
		cur = n1 + n2;
		n1 = n2;
		n2 = cur;
	}
	return cur;
}