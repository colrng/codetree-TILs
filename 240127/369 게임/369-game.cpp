#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; //0 to 100
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i > 10) {
            if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
                cout << 0 << " ";
            }
            else if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        else {
            if (i == 3 || i == 6 || i == 9) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
    }
    return 0;
}