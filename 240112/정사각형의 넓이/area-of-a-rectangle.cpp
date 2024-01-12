#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;

    int c = n*n;

    if (n<5){
        cout<<c<<endl<<"tiny";
    }
    else cout<<c;
    
    return 0;
}