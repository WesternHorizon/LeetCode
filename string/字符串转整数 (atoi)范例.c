int myAtoi(char* str) {

	int str_len = strlen(str);
	int i, flag = 0;
	int result = 0, cur = 0;
	char c;

	for (i = 0; i < str_len; i++) {
		c = str[i];
		if (c == '+' && !flag) {
			flag = 1;
			continue;
		}
		else if (c == '-' && !flag) {
			flag = -1;
			continue;
		}
		else if (c >= '0' && c <= '9') {
			if (flag != -1) {
				flag = 1;
			}
			cur = result * 10 + (c - '0');

		}
		else if (c == ' ' && !flag) {
			continue;
		}
		else {
			break;
		}


		if ((cur - c + '0') / 10 != result || cur < 0) {
			if (flag == 1) {
				return INT_MAX;
			}
			else if (flag == -1) {
				return INT_MIN;
			}
		}
		else {
			result = cur;
		}

	}
	if (flag == -1) {
		result = 0 - result;
	}

	return result;
}