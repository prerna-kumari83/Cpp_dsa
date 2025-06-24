#include <iostream>
using namespace std;

void spiral_print(int arr[][5]){
    int count = 0;
    int row = 5;
    int col = 5; // Added missing semicolon
    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

    while(count < row * col){
        // Print first row
        for(int i = startCol; i <= endCol; ++i){
            cout << arr[startRow][i] << " ";
            count++;
        }
        startRow++;

        // Print last column
        for(int i = startRow; i <= endRow; ++i){
            cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;

        // Print last row
        if(startRow <= endRow){
            for(int i = endCol; i >= startCol; --i){
                cout << arr[endRow][i] << " ";
                count++;
            }
            endRow--;
        }

        // Print first column
        if(startCol <= endCol){
            for(int i = endRow; i >= startRow; --i){
                cout << arr[i][startCol] << " ";
                count++;
            }
            startCol++;
        }
    }
}

int main(){
    int arr[5][5];
    int a = 1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            arr[i][j] = a++;
        }
    }

    cout << "Original Array: " << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Spiral Order: " << endl;
    spiral_print(arr);

    return 0;
}
