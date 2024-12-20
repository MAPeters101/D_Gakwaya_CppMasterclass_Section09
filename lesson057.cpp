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


	return 0;
}



