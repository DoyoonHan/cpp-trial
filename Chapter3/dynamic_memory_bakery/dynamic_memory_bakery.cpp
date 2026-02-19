#include <iostream>
#include <string>

using namespace std;

int main()
{
    int customer_num = 0;

	cout << "Enter the number of customers: ";
	cin >> customer_num;

	string *bread = new string[customer_num];

	cout << endl << "Bread made" << endl;

	for (int i = 0; i < customer_num; i++) {
		bread[i] = "bread_" + to_string(i + 1);
		cout << *(bread + i) << endl;
	}

	delete[] bread;


	return 0;
}
