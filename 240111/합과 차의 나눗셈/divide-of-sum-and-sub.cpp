#include <iostream>

using namespace std;

int main() {

    double a, b;
    cin >> a >> b;
    double c = a + b;
    double z = a - b;

    cin >> fixed;
    cout.precision(3);

    cout << c / z;

    return 0;
}