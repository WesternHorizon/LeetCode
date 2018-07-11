bool isValid(string s) {
	stack<char> st;

	for (auto c : s) {
		if (c == '(' || c == '{' || c == '[')
			st.push(c);
		else {
			if (st.size() == 0) return false;
			switch (c)
			{
			case ')':
				if (st.top() != '(') return false;
				break;
			case '}':
				if (st.top() != '{') return false;
				break;
			case ']':
				if (st.top() != '[') return false;
				break;
			default:
				break;
			}
			st.pop();
		}
	}
	if (st.size() != 0) return false;
	return true;
}