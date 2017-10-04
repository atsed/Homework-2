#include <iostream>
#include "stack.hpp"

using namespace std;

void stackEmpty() 
{
	Stack<char> arrayChar;
	char wordChar[] = "KCATS_RAHC";
	for(int i = 0; i < strlen(wordChar); i++) 
		arrayChar.push(wordChar[i]); 
	while(!arrayChar.empty()) 
		cout << arrayChar.pop() << " ";
	
	cout << endl << endl;
}

int main() 
{
	stackEmpty();
}
