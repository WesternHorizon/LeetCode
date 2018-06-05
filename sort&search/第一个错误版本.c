int isBadVersion(int version);

int firstBadVersion(int n) {
	int low, high, mid;
	low = 1;
	high = n;

	while (1) {
		mid = low + (high - low) / 2;
		if (isBadVersion(mid)) {
			if (mid == 1) return mid;
			if (!isBadVersion(mid - 1)) return mid;
			high = mid;
		}
		else {
			if (low == mid) low++;
			else low = mid;
		}
	}
}