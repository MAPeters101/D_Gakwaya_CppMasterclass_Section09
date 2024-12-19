#include <iostream>

using namespace std;


int main() {
	int value{ 5 };

	value = value + 1;
	cout << "The value is : " << value << endl;

	value = 5;
	value = value - 1;
	cout << "The value is : " << value << endl << endl;

	cout << "=====Postfix increment and decrement=====" << endl;
	value = 5;
	cout << "The value is (incrementing) : " << value++ << endl;
	cout << "The value is : " << value << endl << endl;

	value = 5;
	cout << "The value is (decrementing) : " << value-- << endl;
	cout << "The value is : " << value << endl;



	return 0;
}