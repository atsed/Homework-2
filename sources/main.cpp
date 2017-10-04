#include <iostream>
#include "stack.hpp"

using namespace std;

int main() 
{
	try 
	{
		Stack<int> Stack_int(10); 
		
		Stack_int.push(0);
		Stack_int.push(1);
		Stack_int.push(2);
		Stack_int.push(3);
		Stack_int.push(4);
		Stack_int.push(5);
		Stack_int.push(6);
		Stack_int.push(7);
		Stack_int.push(8);
		Stack_int.push(9);

		for(int i = 0; i < 7; i++) 
		{
			cout << Stack_int.pop() << endl;
		}
		cout << endl << endl;

		cout << "!Элементы Стека типа Char!" << endl;
		Stack<char> Stack_char(5); 
		
   		Stack_char.push('o');
		Stack_char.push('l');
		Stack_char.push('l');
		Stack_char.push('e');
		Stack_char.push('h');

		for(int i = 0; i < 5; i++) 
		{
			cout << Stack_char.pop();
		}
		cout << endl;

    		cout << "!Элементы стека типа Char с добавленной памятью!" << endl;
		Stack<char> Stack_char_OW(5); 
   
    		Stack_char_OW.push('e');
		Stack_char_OW.push('d');
		Stack_char_OW.push('c');
		Stack_char_OW.push('b');
		Stack_char_OW.push('a');

    
    		for(int i = 0; i < 11; i++) 
		{
			cout << Stack_char_OW.pop();
		}
		cout << endl;

	} 
	catch(const exception& e) 
	{ 
		cout << e.what() << endl;
	}
}



