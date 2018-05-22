char* reverseString(char* s) {
    char *p1, *p2;
	char temp;

	p1 = s;
	p2 = s + strlen(s) - 1;

	while (p1 < p2) {
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
	return s;
}