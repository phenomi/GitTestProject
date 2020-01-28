#include <iostream>

using namespace std;

int addNumbers(int number1, int number2);
int subtractNumbers(int number1, int number2);

int main() {

	int number1 = 1;
	int number2 = 1;
	char chosenOperator;
	cout << "Please enter two (2) integers that you want" << endl
		<< "to add, subtract, divide, or multiply." << endl << endl;

	cout << "Entered integers: ";
	cin >> number1 >> number2;

	cout << "Please type + , - , / , or * depending on" << endl
		<< "what kind of an operation you want to perform." << endl << endl;

	cout << "Desired operation: ";
	cin >> chosenOperator;

	switch(chosenOperator) {
		case '+':
			addNumbers(number1, number2);
			break;
		case '-':
			subtractNumbers(number1, number2);
			break;
		case '/':
			divideNumbers(number1, number2);
			break;
		case '*':
			multiplyNumbers(number1, number2);
			break;
		default:
			cout << "Invalid input." << endl;
	}


	return 0;
}


int addNumbers(int number1, int number2)
{
	return number1 + number2;
}

int subtractNumbers(int number1, int number2)
{
	return number1 - number2;
}