#include <iostream>
#include <string>

#define ConstantNumber 10

using namespace std;

int main() {
 	const int ConstantNumber = 10;
 	int InputNumber;

 	cout << "Please enter your number : ";
 	cin >> InputNumber;

	string Result = (InputNumber>ConstantNumber) ? "Yes" : "No";
	cout << Result << endl;

	return 0;
}

