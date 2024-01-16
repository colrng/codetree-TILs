#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a_math, a_eng;
    int b_math, b_eng;

    // 입력
    cin >> a_math >> a_eng;
    cin >> b_math >> b_eng;

    // 출력
    if(a_math > b_math || (a_math == b_math && a_eng > b_eng))
        cout << "A";
    else
        cout << "B";

    return 0;
}