#include <iostream>
#include "stack.hpp"

using namespace std;

void stackPop() 
{
	Stack <int> arrayInt;
	for(int i = 0; i < 10; i++) 
		arrayInt.push(i); 
	for(int j = 0; j < 6; j++) 
		cout << arrayInt.pop() << " "; 
	cout << endl;
}

int main() 
{
	stackPop();
}


