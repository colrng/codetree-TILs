#include <iostream>

using namespace std;

int main() {
    
    int a,b;
    cin >> a >> b;

    if (a <= 90) {
        cout << 0;
    }
    else if (b == 100 || b <= 95) {
        cout << 100000;
    }
    else if (b <= 90){
        cout << 50000;
    }
    else cout << "";

    return 0;
}