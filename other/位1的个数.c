int hammingWeight(uint32_t n) {
	int count = 0;

	while (n) {
		count += n & 0x01;
		n >>= 1;
	}
	return count;
}

int hammingWeight(uint32_t n) {
	int count = 0;

	while (n) {
		n = n & (n - 1);
		count++;
	}
	return count;
}

//最初版本
int hammingWeight(uint32_t n) {
	int size = 0;

	while (n) {
		if (n & 0x01)size++;
		n >>= 1;
	}
	return size;
}
