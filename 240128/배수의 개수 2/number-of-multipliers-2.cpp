#include <iostream>
using namespace std;

int main() {

	int n;
	int cnt = 0;

	for (int i = 1; i < 10; i++) {
		cin >> n;
		if (i % 2 == 1 || i / 10 == 1) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;

}