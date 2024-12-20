#include <iostream>
#include <iomanip>

using namespace std;

/*
int main() {
	cout << "Hello";
	cout << "World";
	cout << endl;

	cout << "--------------------" << endl;
	cout << "Hello" << endl;
	cout << "World" << endl;
	cout << endl;

	cout << "Hello\n";
	cout << "World\n";
	cout << endl;
	cout << "===============================" << endl << endl;

	cout << "This is a nice message..." << endl << flush;
	cout << "===============================" << endl << endl;


	cout << "Unformatted table : " << endl;
	cout << "Lastname" << " " << "Firstname" << "Age" << endl;
	cout << "Daniel" << " " << "Gray" << " 25" << endl;
	cout << "Stanley" << " " << "Woods" << " 33" << endl;
	cout << "Jordan" << " " << "Parker" << " 45" << endl;
	cout << "Joe" << " " << "Ball" << " 21" << endl;
	cout << "Josh" << " " << "Carr" << " 27" << endl;
	cout << "Izaiah" << " " << "Robinson" << " 29" << endl;
	cout << endl;

	cout << "Formatted table : " << endl;
	cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << endl;
	cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << " 25" << endl;
	cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << " 33" << endl;
	cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << " 45" << endl;
	cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << " 21" << endl;
	cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << " 27" << endl;
	cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << " 29" << endl;
	cout << endl;

	int col_width{ 14 };
	int col_width2{ 7 };

	cout << "Formatted table with variables: " << endl;
	cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width2) << "Age" << endl;
	cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width2) << " 25" << endl;
	cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width2) << " 33" << endl;
	cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width2) << " 45" << endl;
	cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width2) << " 21" << endl;
	cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width2) << " 27" << endl;
	cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width2) << " 29" << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	col_width = 20;
	col_width2 = 7;

	cout << "Right Justified table (default): " << endl;
	cout << std::right;
	cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width2) << "Age" << endl;
	cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width2) << "25" << endl;
	cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width2) << "33" << endl;
	cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width2) << "45" << endl;
	cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width2) << "21" << endl;
	cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width2) << "27" << endl;
	cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width2) << "29" << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	col_width = 20;
	col_width2 = 7;

	cout << "Left Justified table (default): " << endl;
	cout << std::left;
	cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width2) << "Age" << endl;
	cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width2) << "25" << endl;
	cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width2) << "33" << endl;
	cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width2) << "45" << endl;
	cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width2) << "21" << endl;
	cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width2) << "27" << endl;
	cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width2) << "29" << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	//Internal justified : sign is left justified, data is right justified
	cout << "Internal justified : " << endl;
	cout << right;
	cout << setw(10) << -123.45 << endl;
	cout << internal;
	cout << setw(10) << -123.45 << endl;
	cout << endl;
	cout << "===============================" << endl << endl;
	col_width = 20;
	col_width2 = 7;

	cout << "Table with fill characters : " << endl;
	cout << std::left;
	cout << std::setfill('-');
	cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width2) << "Age" << endl;
	cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width2) << "25" << endl;
	cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width2) << "33" << endl;
	cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width2) << "45" << endl;
	cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width2) << "21" << endl;
	cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width2) << "27" << endl;
	cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width2) << "29" << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	bool condition{ true };
	bool other_condition{ false };

	cout << "condition : " << condition << endl;
	cout << "other_condition : " << other_condition << endl;
	cout << endl;

	cout << std::boolalpha;
	cout << "condition : " << condition << endl;
	cout << "other_condition : " << other_condition << endl;
	cout << endl;

	cout << std::noboolalpha;
	cout << "condition : " << condition << endl;
	cout << "other_condition : " << other_condition << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	int pos_num{ 34 };
	int neg_num{ -45 };

	cout << "pos_num : " << pos_num << endl;
	cout << "neg_num : " << neg_num << endl;
	cout << endl;

	cout << std::showpos;
	cout << "pos_num : " << pos_num << endl;
	cout << "neg_num : " << neg_num << endl;
	cout << endl;

	cout << std::noshowpos;
	cout << "pos_num : " << pos_num << endl;
	cout << "neg_num : " << neg_num << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	int pos_int{ 717171 };
	int neg_int{ -47347 };
	double double_var{ 498.32 };

	cout << "default base format : " << endl;
	cout << "pos_int : " << pos_int << endl;
	cout << "neg_int : " << neg_int << endl;
	cout << "double_var : " << double_var << endl;
	cout << endl;

	cout << "pos_int in different bases : " << endl;
	cout << "pos_int (dec) : " << std::dec << pos_int << endl;
	cout << "pos_int (hex) : " << std::hex << pos_int << endl;
	cout << "pos_int (oct) : " << std::oct << pos_int << endl;
	cout << endl;

	cout << "neg_int in different bases : " << endl;
	cout << "neg_int (dec) : " << std::dec << neg_int << endl;
	cout << "neg_int (hex) : " << std::hex << neg_int << endl;
	cout << "neg_int (oct) : " << std::oct << neg_int << endl;
	cout << endl;


	cout << "couble_var in different bases : " << endl;
	cout << "double_var (dec) : " << std::dec << double_var << endl;
	cout << "double_var (hex) : " << std::hex << double_var << endl;
	cout << "double_var (oct) : " << std::oct << double_var << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	pos_int = 717171;

	cout << "pos_int (nouppercase : default) " << endl;
	cout << "pos_int (dec) : " << std::dec << pos_int << endl;
	cout << "pos_int (hex) : " << std::hex << pos_int << endl;
	cout << "pos_int (oct) : " << std::oct << pos_int << endl;
	cout << endl;

	cout << "pos_int (uppercase) " << endl;
	cout << std::uppercase;
	cout << "pos_int (dec) : " << std::dec << pos_int << endl;
	cout << "pos_int (hex) : " << std::hex << pos_int << endl;
	cout << "pos_int (oct) : " << std::oct << pos_int << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	double a{ 3.1415926535897932384626433832795 };
	double b{ 2006.0 };
	double c{ 1.34e-10 };

	cout << "double values (default : use scientific where necessarty) : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << endl;

	cout << "double values (fixed) : " << endl;
	cout << fixed;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << endl;

	cout << "double values (scientific) : " << endl;
	cout << scientific;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << endl;

	cout << "double values (back to defaults) : " << endl;
	cout.unsetf(std::ios::scientific | std::ios::fixed);
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	a = 3.1415926535897932384626433832795;

	cout << "a (default precision(6)) : " << a << endl;
	cout << std::setprecision(10);
	cout << "a (precision(10)) : " << a << endl;
	cout << std::setprecision(20);
	cout << "a (precision(20)) : " << a << endl;
	cout << endl;
	cout << endl;
	cout << "===============================" << endl << endl;

	double d{ 34.1 };
	double e{ 101.99 };
	double f{ 12.0 };
	int g{ 45 };

	cout << endl;
	cout << "noshowpoint (default) : " << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;

	cout << endl;
	cout << "showpoint (default) : " << endl;
	cout << std::showpoint;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;

	return 0;
}
*/

