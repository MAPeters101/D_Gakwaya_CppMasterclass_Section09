#include <iostream>
#include <iomanip>

using namespace std;


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



	return 0;
}


