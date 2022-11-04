#include <iostream>

using namespace std;

int main() {
 	int FirstNumber, SecondNumber;

	cout << "Enter the first number : ";
	cin >> FirstNumber;

	cout << "Enter the second number : ";
	cin >> SecondNumber;

	cout << "The bigger number is : " <<  max(FirstNumber, SecondNumber);
	return 0;
}

