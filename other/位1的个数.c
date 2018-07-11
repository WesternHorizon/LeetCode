int hammingWeight(uint32_t n) {
	uint32_t x = n;
	int size = 0;

	while (x) {
		if (x & 0x01)size++;
		x >>= 1;
	}
	return size;
}