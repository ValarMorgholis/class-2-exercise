#include <iostream>

using namespace std;

int main() {
	int FirstNumber, SecondNumber;

	cout << "Enter the first number : ";
	cin >> FirstNumber;

	cout << "Enter the second number : ";
	cin >> SecondNumber;

	if (FirstNumber > SecondNumber) 
		cout << FirstNumber;

	else if (FirstNumber == SecondNumber)
		cout << "These number are equal";

	else
		cout << "The bigger number is : " << SecondNumber;

	return 0;
}

