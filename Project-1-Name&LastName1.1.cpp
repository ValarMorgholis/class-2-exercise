#include <iostream>

using namespace std;

int main() {
	char name[BUFSIZ], last_name[BUFSIZ];

	cout << "Please enter your name : ";
	cin >> name;

	cout << "Please enter your last name : ";
	cin >> last_name;

	cout << "Your name and last name is \"" << name << "\"\t\"" << last_name << "\"" << endl;
	return 0;
}

