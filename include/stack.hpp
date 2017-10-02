#include <iostream>

using namespace std;

void stack_empty(size_t);
void stack_push(size_t);
void stack_pop(size_t);
void stack_init();

template <typename T>
class stack
{
private:
	T * array_;
	size_t array_size_;
	size_t count_;
public:
	stack();
	stack(size_t);
	size_t count() const;
	void push(T const &);
	bool empty() const;
	T pop();
	void printStack();
};

template <typename T>
stack<T>::stack() : array_size_(2), array_(new T[array_size_]), count_(0) {}
template <typename T>
stack<T>::stack(size_t maxEl) : array_size_(maxEl), array_(new T[maxEl]), count_(0) {}

template <typename T>
void stack<T>::push(const T &value) {
	if (count_ == array_size_) {
		T* array_size2_ = new T[2 * array_size_];
		for (size_t i = 0; i != array_size_; ++i) {
			array_size2_[i] = array_[i];
		}
		delete[] array_;
		array_ = array_size2_;
	}
	array_[count_++] = value;
}

template<typename T>
T stack<T>::pop() {
	if (count_ == 0) {
		throw domain_error{ "*** ERROR - Stack empty ***" };
	}
	--count_;
	return array_[count_];
}

template<typename T>
size_t stack<T>::count() const {
	return count_;
}

template<typename T>
bool stack<T>::empty() const
{
	return count();
}

template<typename T>
void stack<T>::printStack() {
	for (int i = count_ - 1; i >= 0; i--)
		cout << "[" << setw(4) << array_[i] << "]" << endl;
}
