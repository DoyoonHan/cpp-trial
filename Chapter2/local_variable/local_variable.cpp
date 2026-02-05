#include <iostream>
using namespace std;

void print() {
    int value = 10;
	cout << "inside print: " << value << endl;
}

int main()
{
    int value = 5;
    cout << "inside main: " << value << endl;

    print();
    cout << "main again: " << value << endl;

    return 0;
}


