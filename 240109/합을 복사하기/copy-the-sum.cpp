#include <iostream>
using namespace std;

int main() {

	int a = 1, b = 2, c = 3;

    int z = a+b+c;
    c=z;
	a = b = c;
	cout << a << " " << b << " " << c;

	return 0;

}