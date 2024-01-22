#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
    
    // 출력
	for(int i = n; i <= 5 * n; i += n)
		cout << i << " ";

    return 0;
}