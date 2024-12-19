#include <iostream>

using namespace std;



int main() {
	bool a{ true };
	bool b{ false };
	bool c{ true };

	cout << boolalpha;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl << endl;

	cout << "Basic AND operations" << endl;
	cout << "a  && b : " << (a && b) << endl;
	cout << "a  && c : " << (a && c) << endl;
	cout << "a  && b && c : " << (a && b && c) << endl << endl;

	cout << "Basic OR operations" << endl;
	cout << "a  || b : " << (a || b) << endl;
	cout << "a  || c : " << (a || c) << endl;
	cout << "a  || b || c : " << (a || b || c) << endl << endl;


	return 0;
}


