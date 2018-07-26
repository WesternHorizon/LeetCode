class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {
	}

	void push(int x) {
		if (minst.empty() || x < v[minst.top()]) {
			minst.push(v.size());
		}
		v.push_back(x);
	}

	void pop() {
		v.pop_back();
		if (v.size() == minst.top())
			minst.pop();
	}

	int top() {
		return v[v.size() - 1];
	}

	int getMin() {
		return v[minst.top()];
	}

private:
	vector<int> v;
	stack<int> minst;
};