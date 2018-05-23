bool isPalindrome(char* s) { //更改原始字符串版本
	char *p, *q;

	p = q = s;
	while (*p) {
		if (isalnum(*p)) {
			*q++ = tolower(*p);
		}
		p++;
	}
	*q = '\0';

	q--;
	while (s < q) {
		if (*s++ != *q--) return 0;
	}
	return 1;
}

bool isPalindrome(char* s) {  //不更改原始字符串版本
	char *p, *str;

	str = (char*)malloc(sizeof(char) *(strlen(s) + 1));  //申请空间存放新字符串

	p = str;
	while (*s) {
		if (isalnum(*s)) {
			*p = tolower(*s);
			p++;
		}
		s++;
	}
	*p = '\0';

	p = str + strlen(str) -1;
	while (str < p) {
		if (*str++ != *p--) return 0;
	}
	return 1;
}