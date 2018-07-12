int hammingDistance(int x, int y) {
	int n = x ^ y; //关键一步，异或标出所有不同位，接下来求汉明重量即可
	int count = 0;

	while (n) {
		count += n & 0x01;
		n >>= 1;
	}
	return count;
}