#include "stack.hpp"

int s = 0;

void stack_init() {
	Stack<int> st;
	cout << "Created stack" << st << endl;
}

void stack_push(size_t n) {
	Stack<int> st;
	for(int i = 0; i<n; i++) {
		st.push(i);
	}
	cout << "Created stack" << " " << n << endl;
}

void stack_pop(size_t n) {
	Stack<int> st;
	for(int i = 0; i<n; i++) {
		st.push(i);
	}
		
	for(int j = 0; j<(n/2); j++) {
		cout << st.pop() << " ";
	}
	cout << endl;

	cout << "Created stack" << endl;
	cout << "Push" << n << endl;
	cout << "Pop" << (n/2) << endl;
}

void stack_empty(size_t n) {
	Stack<int> st;
	for(int i = 0; i<n; i++) {
		st.push(i);
	}

	while(!st.empty()) {
		cout << st.pop() << endl;
	}
	cout << "Created stack" << endl;
	cout << "Push " << n << endl;
}
