#include <iostream>
using namespace std;

int main() {
    int array[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array[i][j]l
         }
     }
     
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] *= 2;
        }
     }
     
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
    cout << endl;
     } // Please write your code here.
    return 0;
}