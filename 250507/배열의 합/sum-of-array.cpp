#include <iostream>
using namespace std;

int main() {
    int array[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
        sum += array[i][j];
        }
        cout << sum << endl;
    }// Please write your code here.
    return 0;
}