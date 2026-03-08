#include <iostream>

using namespace std;


int main(){

    int x, y, z;
    cout << "VL INICIAL: ";
    cin >> x;

    cout << "VL FINAL: ";
    cin >> y;

    cout << "QNT EM QNT: ";
    cin >> z;

    for(int i = x; i < y; i += z){
        cout << "\n" << i;
    }

    return 0;
}