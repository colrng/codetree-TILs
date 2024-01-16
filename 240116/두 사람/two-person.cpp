#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    char a_1, b_1;

    
    cin >> a >> a_1;
    cin >> b >> b_1;

    if ((a >= 19 && a_1 == 'M') || (b >= 19 && b_1 == 'M'))
    
    cout << 1;

    else cout << 0;



    return 0;
}