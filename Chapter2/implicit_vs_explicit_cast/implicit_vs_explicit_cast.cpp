#include <iostream>
using namespace std;

int implicit_cast() {
    float float_value = 1.5f;

	double double_value = float_value;
	int int_value = float_value;

	cout << "float_value: " << float_value << endl;
	cout << "double_value: " << double_value << endl;
	cout << "int_value: " << int_value << endl;
	return 0;
}

int explicit_cast() {
	int int_a = 10;
	int int_b = 5;

	int int_avg = (int_a + int_b) / 2; 
	float float_avg1 = (int_a + int_b) / 2;
	float float_avg2 = float(int_a + int_b) / 2;

	cout << "int_avg: " << int_avg << endl;
	cout << "float_avg1: " << float_avg1 << endl;
	cout << "float_avg2: " << float_avg2 << endl;
	return 0;	
}

int main()
{
	cout << "Implicit Cast: " << endl;
	implicit_cast();

	cout << "\nExplicit Cast: " << endl;
	explicit_cast();
	return 0;
}

