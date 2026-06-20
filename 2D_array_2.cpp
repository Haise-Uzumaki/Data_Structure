#include <iostream>
using namespace std;

int main(){
    int number [2][3];

    cout << "Enter 6 numbers: " << endl;

    for(int r=0; r<2; r++){
        for(int c=0; c<3; c++){
            cin >> number[r][c];
        }
    }
    cout << "The Numbers Are: " <<endl;

    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++){
            cout << "number [" << r << "]["<< c << "] = "<< number [r][c]<<endl;
        }
    }
}