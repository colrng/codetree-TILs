#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cin>>a>>b;

    c=b*100*100/(a*a);
    
    if(c>25){
        cout<<c<<endl<<"Obesity";
    }
    
    else cout<<c;
    
    return 0;
}