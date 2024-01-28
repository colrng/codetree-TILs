#include <iostream>
using namespace std;

int main() {

	int n;
	int cnt = 0;
	int cnt1 = 0;

	for (int i = 1; i <= 10; i++) {
		
        cin >> n;

		if (n % 3 == 0){

			cnt++;
		}
		if (n % 5 == 0) {

			cnt1++;
		}

	}
	cout << cnt << " " << cnt1;

	return 0;

}