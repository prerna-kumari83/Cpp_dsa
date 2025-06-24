#include <iostream>
using namespace std;

void print(int arr[][5]){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void wave_print(int arr[][5]){
    int j = 0;
    while (j < 5) {
        if (j == 0 || j % 2 == 0) {
            for (int i = 0; i < 5; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int i = 4; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        j++; // Increment column index
    }
    cout << endl; // Add a new line at the end for better formatting
}

int main(){
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    cout << "Wave print of the array:" << endl;
    wave_print(arr);

    return 0;
}
