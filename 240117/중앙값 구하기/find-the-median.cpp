#include <iostream>

using namespace std;

int main() {
    int a, b, c;

	
	cin >> a >> b >> c;
    
   
    if((b < a && a < c) ||(c<b && b<a) ){

        cout << a;
    }
    else if(a < b && b < c ){

        cout << b;
    }

    else{

        cout <<  c;
    }

	return 0;
}