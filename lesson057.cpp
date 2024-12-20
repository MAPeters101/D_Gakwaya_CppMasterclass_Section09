#include <iostream>

using namespace std;


int main() {
	double weight{ 7.7 };
	cout << "Weight rounded to floor is : " << std::floor(weight) << endl;
	cout << "Weight rounded to ceil is : " << std::ceil(weight) << endl;

	double savings{ -5000 };
	cout << "Abs of weight is : " << abs(weight) << endl;
	cout << "Abs of savings is : " << abs(savings) << endl;

	//exp : f(x) = e ^ x, where e = 2.71828
	double exponential = std::exp(10);
	cout << "The exponential of 10 is : " << exponential << endl;

	cout << "3 ^ 4 is : " << std::pow(3, 4) << endl;
	cout << "9 ^ 3 is : " << std::pow(9,3) << endl;

	// log : reverse function of pow.  if 2^3 = 8, log 8 in base 2 = 3.  Log is like as
	// to which exponent should we elevate 2 to get eight?  Log, by default computes the
	// in base e.  There also is another function which uses base 10 called log10

	// Try the reverse operation of e^4 = 54.59, it will be log 54.59 in base e = ?
	cout << "Log; to get 54.59, you would elevate e to the power of : "
		<< std::log(54.59) << endl;

	//log10, 10 ^ 4 = 10000, to get 10km you'd need to elevate 10 to the power of
	cout << "To get 10000, you'd need to elevate 10 to the power of : "
		<< std::log10(10000) << endl;

	return 0;
}



