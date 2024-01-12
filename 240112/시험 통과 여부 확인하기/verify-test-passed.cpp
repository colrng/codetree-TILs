#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    if (n<80){
        int c = 80 - n;
        cout<< c << " more score";
    }
    else cout <<"pass";
    return 0;
}