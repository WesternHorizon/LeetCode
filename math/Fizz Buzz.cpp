vector<string> fizzBuzz(int n) {
	vector<string> result;
	int chose;

	for (int i = 1; i <= n; i++) {
		chose = 0;
		if (i % 3 == 0) chose += 1;
		if (i % 5 == 0) chose += 2;
		switch (chose)
		{
		case 0:
			result.push_back(to_string(i));
			break;
		case 1:
			result.push_back("Fizz");
			break;
		case 2:
			result.push_back("Buzz");
			break;
		case 3:
			result.push_back("FizzBuzz");
			break;
		default:
			break;
		}
	}
	return result;
}