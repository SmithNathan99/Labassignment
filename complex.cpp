#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;
int main()
{
	enum Operation {Multiply = 'M', Add = 'A', Difference = 'D'}; // declaring enumeration and the variables
	int result; 
	int num1;
	int num2;

	Operation my_operation;
	char choice;
	
	//receiving userinput
	cout << "Enter two integers: ";
	cin >> num1;
	cin >> num2;
	
	//declaraing boolean
	bool valid = true;

	do //do-while loop to get the user input and calculation
	{

		cout << "What is your choice of operation? M, A, or D. To multiply, add, or difference: ";
		cin >> choice;		
		choice = toupper(choice); //if the userinput is lowercased it is now uppercased

		my_operation = static_cast<Operation>(choice);
		
		//switch-case to justify what operation will be used
		switch(my_operation) {

			case Multiply:
				result = num1 * num2;
				valid = false;
				break;

			case Add:
				result = num1 + num2;
				valid = false;
				break;

			case Difference:
				result = num1 - num2;
				valid = false;
				break;

			default: // if user input is invalid loop will continue to run until it receives a valid input
				cout << "The choice you entered is invalid. Please try again\n";
				valid = true;
				break;
		}
	} while(valid);

	cout << "The result of the operation is " << result << endl;

	return 0;
}
