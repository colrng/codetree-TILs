#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;

	if (a % 19 == 0 || a % 13 == 0) {
		cout << "True";
	}
	else {
		cout << "False";
	}

	return 0;

}