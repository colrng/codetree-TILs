#include <iostream>
using namespace std;

int main() {

	int n;
	int cnt = 0;
	int cnt1 = 0;

	for (int i = 1; i <= 5; i++) {

		cin >> n;

		if (n % 2 == 0) {

			cnt++;
		}
	}
	cout << cnt;

	return 0;

}