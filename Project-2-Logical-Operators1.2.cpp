#include <iostream>

using namespace std;

int main() {
	cout << ((5 >= 3 && 3 > 100 || 4 > 3) ? 
			"This statement is true" : "This statement is false") << endl;
	return 0;
}

