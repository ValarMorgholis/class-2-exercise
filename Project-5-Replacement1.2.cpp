#include <iostream>

using namespace std;

int main() {
    int FirstInput, SecondInput;

  	cout << "Please enter the first number : ";
  	cin >> FirstInput;

  	cout << "Please enter the second number : ";
	cin >> SecondInput;

	FirstInput = FirstInput + SecondInput;
	SecondInput = FirstInput - SecondInput;
	FirstInput = FirstInput - SecondInput;

 	cout << "Now the first number is : " << FirstInput << endl;
 	cout << "Now the second number is : " << SecondInput << endl; 

	return 0;
}

