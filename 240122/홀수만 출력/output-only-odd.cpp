#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a,b;

	// 입력
	cin >> a >> b;
    
    // 출력
	for(int i = a; i <= b; i += 1){
        if (i % 2 == 1)
        	cout << i << " ";
    }
		

    return 0;
}