#include <iostream>
#include "stack.hpp"

using namespace std;

void stackPush() 
{
	Stack<int> arrayInt;
	for(int i = 0; i < 10; i++)  
		arrayInt.push(i*2);
	for(size_t j = 0; j < arrayInt.count(); j++) 
		cout << arrayInt[j] << " ";
	cout << endl;
}

int main() 
{
	stackPush();
}
