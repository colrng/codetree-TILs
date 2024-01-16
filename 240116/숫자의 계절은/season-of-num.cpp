#include <iostream>

using namespace std;

int main() {
    
    int a;

    cin >> a;

	if (a  == 12 || a <= 2) {
		    cout << "Winter";
	}
	else if (a == 11 || a <= 10) {
		    cout << "Summer";
	}
	else if (a == 8 || a <= 7) {
		    cout << "Fall";
	}
    else cout << "Spring";

    return 0;
}