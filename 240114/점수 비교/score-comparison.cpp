#include <iostream>
using namespace std;

int main() {

	int a,b,a1,b1;
	cin >> a >> a1;
    cin >> b >> b1;
	
    if (a > b && a1 > b1) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;

}