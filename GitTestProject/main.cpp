#include <iostream>

using namespace std;

int addNumbers(int number1, int number2);
int subtractNumbers(int number1, int number2);

int main() {

	int number1 = 1;
	int number2 = 1;
	cout << "Please enter two (2) integers that you want" << endl
		<< "to add, subtract, divide, or multiply." << endl << endl;

	cout << "Entered integers: ";
	cin >> number1 >> number2;


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