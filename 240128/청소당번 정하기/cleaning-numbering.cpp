#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int cnt = 0;
	int cnt1 = 0;
	int cnt2 = 0;


	for (int i = 1; i <= n; i++) {

		if (i % 12 == 0) {

			cnt++;
		}
		else if (i % 3 == 0) {

			cnt1++;
		}
		else if (i % 2 == 0) {
			cnt2++;
		}

	}
	cout << cnt2 << " " << cnt1 << " " << cnt;

	return 0;

}