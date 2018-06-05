int myAtoi(char* str) {
	int isNegative = 0;
	long long total;
	char *numBegin;

	if (str == NULL) return 0;  //判断空串

	while (isspace(*str)) str++;  //跳过开头空白字符

	if (*str != '+' && *str != '-' && !isdigit(*str)) return 0;

	if (*str == '-' || *str == '+') {
		if (*str == '-')
			isNegative = 1;
		str++;
		if (!isdigit(*str)) return 0;
	}

	while (*str=='0') str++;

	total = 0;
	numBegin = str;
	while (*str) {
		if (isdigit(*str)) {
			total = total * 10 + (*str - '0');
			str++;
			if (str - numBegin > 10) break;
		}
		else break;
	}
	if (isNegative)
		total = -total;
	if (total > INT_MAX) return INT_MAX;
	if (total < INT_MIN) return INT_MIN;
	return (int)total;
}