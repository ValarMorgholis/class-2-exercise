#include <iostream>

using namespace std;

int main() { 
	int FirstInput, SecondInput;

	cout << "Plaese inter the first number : ";
	cin >> FirstInput;

	cout << "Please inter the second number : ";
	cin >> SecondInput;

	swap(FirstInput, SecondInput); 

	cout << "Now the first number is : " << FirstInput << endl;
	cout << "Now the second number is : " << SecondInput << endl;

	return 0;
}

