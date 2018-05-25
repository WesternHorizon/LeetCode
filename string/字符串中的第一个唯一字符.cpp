//使用数组版
int firstUniqChar(string s) {
	size_t alphabet[26] = { 0 };
	
	for (auto &c : s)
		alphabet[c - 'a']++;

	size_t size = s.size();
	for (size_t i = 0; i < size; i++)
		if (alphabet[s[i] - 'a'] == 1) return i;
	return -1;
}

//使用map版
int firstUniqChar(string s) {
	map<char, size_t> word_count;

	for (auto &c : s)
		++word_count[c];

	size_t size = s.size();
	for (size_t i = 0; i < size; i++)
		if (word_count[s[i]] == 1) return i;
	return -1;
}

//C语言版
int firstUniqChar(char* s) {
	int len, i;

	len = strlen(s);
	if (len == 0) return -1;
	if (len == 1) return 0;

	int alphabet[26] = { 0 };

	for (i = 0; i < len; i++)
		alphabet[s[i] - 'a']++;

	for (i = 0; i < len; i++)
		if (alphabet[s[i] - 'a'] == 1) return i;
	return -1;
}