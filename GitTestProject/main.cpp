#include <iostream>
#include "multiplicationComponent.h"
#include "divisionComponent.h"
#include "exponentiationComponent.h"

using namespace std;

int addNumbers(int number1, int number2);
int subtractNumbers(int number1, int number2);

int main() {

	int number1 = 1;
	int number2 = 1;
	char chosenOperator;
	double resultArray[] = { 0, 0 };
	cout << "Please enter two (2) integers that you want" << endl
		<< "to add, subtract, divide, multiply or exponentiate." << endl << endl;

	cout << "Entered integers: ";
	cin >> number1 >> number2;

	cout << "Please type + , - , / , * or ^ depending on" << endl
		<< "what kind of an operation you want to perform." << endl << endl;

	cout << "Desired operation: ";
	cin >> chosenOperator;

	cout << "The result of the calculation is";
	switch(chosenOperator) {
		case '+':
			cout << " " << addNumbers(number1, number2);
			break;
		case '-':
			cout << " " << subtractNumbers(number1, number2);
			break;
		case '/':
			cout << " " << divideNumbers(number1, number2);
			break;
		case '*':
			cout << " " << multiplyNumbers(number1, number2);
			break;
		case '^':
			exponentiateNumbers(number1, number2, resultArray);
			cout << ": first number " << resultArray[0] << ", second number " << resultArray[1] << ".";
			break;
		default:
			cout << ": Could not be calculated, invalid input. Please try again." << endl;
	}
	cout << endl << endl;

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