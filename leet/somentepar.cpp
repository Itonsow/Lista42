#include <iostream>

using namespace std;

int main(){

    int x = 0, temp = 0;
    cin >> x;
    cout << "PARES: ";
    while(temp <= x){
        if(temp % 2 == 0){
            cout << "\n" << temp;
        }
        temp++;
    }

    return 0;
}