inline int isncmp(const char *s1, const char *s2)
{
	while (*s2)
		if (*s1++ != *s2++) return 0;
	return 1;
}

int strStr(char* haystack, char* needle) {
	int i, size;

	if (!*needle) return 0;

	size = strlen(haystack) - strlen(needle);
	if (size < 0) return -1;
	
	for (i = 0; i <= size; i++) {
		if (isncmp(haystack + i, needle)) return i;
	}
	
	return -1;
}