#include <iostream>
#define ConstantNumber 10

using namespace std;

int main() {
 	const int ConstantNumber = 10;
 	int InputNumber;

 	cout << "Please enter your number : ";
 	cin >> InputNumber;

 	if (InputNumber > ConstantNumber)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

