bool isAnagram(char* s, char* t)
{
	int alphabetS[26] = { 0 };
	int alphabetT[26] = { 0 };
	int i, lenS, lenT;

	lenS = strlen(s);
	lenT = strlen(t);

	if (lenS != lenT) return 0;

	for (i = 0; i < lenS; i++) {
		alphabetS[s[i] - 'a']++;
		alphabetT[t[i] - 'a']++;
	}

	for (i = 0; i < 26; i++)
		if (alphabetS[i] != alphabetT[i]) return 0;

	return 1;
}