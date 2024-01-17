#include <iostream>
using namespace std;

int main(){

    int at,bt,ct;
    int count = 0;
    char as,bs,cs;

    cin >> as >> at >> bs >> bt >> cs >> ct;


    if (as == 'Y' && at >= 37) {
        count += 1;
    }
    if (bs == 'Y' && bt >= 37) {
        count += 1;
    }
    if (cs == 'Y' && ct >= 37) {
        count += 1;
    }
    
    if ( count >= 2){
        cout << 'E';
    }
    else {
        cout << 'N';
    }
    

    return 0;


}