string longestCommonPrefix(vector<string>& strs) {
	int strsSize = strs.size();
	if (strsSize == 0) return "";
	int i, j = 0;
	char sign;
	uint8_t isEnd = 0;
	while (1) {
		if ((sign = strs[0][j]) == '\0') break;
		for (i = 1; i < strsSize; i++) {
			if (strs[i][j] != sign) {
				isEnd = 1;
				break;
			}
		}
		if (isEnd) break;
		j++;
	}
	return strs[0].substr(0, j);
}