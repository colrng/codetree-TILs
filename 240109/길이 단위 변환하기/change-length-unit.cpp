#include <iostream>

using namespace std;

int main(){

    cout<<fixed;
    double a=30.48; //1피트

    int b=160934; //1마일

    cout.precision(1);
    cout<<"9.2ft"<<" = "<<a*9.2<<"cm"<<endl;

    cout.precision(1);
    cout<<"1.3mi"<<" = "<<b*1.3<<"cm"<<endl;

    return 0;
}