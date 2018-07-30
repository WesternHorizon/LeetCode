uint32_t reverseBits(uint32_t n) {
	uint32_t rn = 0;
	int i;

	for (i = 0; i < 32; i++) {
		rn <<= 1;
		//rn += n & 0x01; 
		rn |= n & 0x01;  //leetcode显示或运算比加法快？
		n >>= 1;
	}
	return rn;
}