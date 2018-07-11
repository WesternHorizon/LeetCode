
int reverse(int x) {
	long long num = 0;
	
	while (x) {
		num = num * 10 + x % 10;
		x /= 10;
	}
	if (num < INT_MIN || num > INT_MAX) return 0;
	return (int)num;
}

//只使用32位整数
int reverse(int x) {
	int num = 0, pop;

	if (x >= 0) {
		while (x) {
			pop = x % 10;
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && pop > 7)) return 0;
			x /= 10;
			num = num * 10 + pop;
		}
	}
	else {
		while (x) {
			pop = x % 10;
			if (num < INT_MIN / 10 || (num == INT_MIN / 10 && pop < -8)) return 0;
			x /= 10;
			num = num * 10 + pop;
		}
	}
	return num;
}