#include <iostream>
using namespace std;

int main() {
    int array[3][3];
    int array2[3][3];
    int sum[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array[i][j];
         }
     }
     
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array2[i][j];
        }
     }
     
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           sum[i][j] = array[i][j] * array2[i][j];
        }
    } 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
    cout << endl;
     } // Please write your code here.
    return 0;
}