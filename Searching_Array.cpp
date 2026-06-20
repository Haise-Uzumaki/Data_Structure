#include <iostream>
using namespace std;

int main(){
    
    int number [10] = {2 , 4 , 8, 109, 23, 45 , 435, 67, 102, 10};
    int n;
    cout<<"Enter A Number: " << endl;
    cin >> n ;
    int index = 0;

    for(int i = 0; i < 10; i++){
        if(number[i] == n){
            index = i;
            break;
        }
    }

    cout << "Found the number at index " << index + 1<< endl;

}