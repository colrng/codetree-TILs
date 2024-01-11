#include <iostream>

using namespace std;

int main() {
    
    int a,b;

    cin>>a>>b;
    a += b;  //a =4 b =3
    b += a;
    cout<<a<<" "<<b;

    return 0;
}