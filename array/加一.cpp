vector<int> plusOne(vector<int>& digits) {
	auto rp = digits.rbegin();
	while (1) {
		if (*rp != 9) {
			*rp += 1;
			break;
		}
		else {
			*rp = 0;
			rp++;
			if (rp == digits.rend()) {
				digits.insert(digits.begin(), 1);
				break;
			}
		}
	}
	return digits;
}

//first version
vector<int> plusOne(vector<int>& digits) {
	auto rp = digits.rbegin();
	auto rendp = digits.rend();
	while (1) {
		if (rp == rendp) {
			digits.insert(digits.begin(), 1);
			break;
		}
		if (*rp == 9) {
			*rp = 0;
			rp++;

		}
		else {
			*rp += 1;
			break;
		}
	}
	return digits;
}