#include <iostream>
using namespace std;

void sprial_print(int arr[][5]){
    int count=0;
    int row=5;
    int col=5;
    int startRow=0;
    int startCol=0;
    int endRow=4;
    int endCol=4;
    while(count<25){
        //print first  row
        for(int i=startCol;i<=endCol;++i){
            cout<<arr[startRow][i]<<" ";
            count++;

        }
        startRow++;
        //print last_col
        for(int i=startRow;i<=endRow;++i){
            cout<<arr[i][endCol]<<" ";
            count++;
        }
        endCol--;

        //print last_row
        if(startRow<=endRow){
              for(int i=endCol;i>=startCol;--i){
            cout<<arr[endRow][i]<<" ";
            count++;
        }
        endRow--;
        }
        //print start_col
if(startCol<=endCol){
    
        for(int i=endRow;i>=startRow;--i){
            cout<<arr[i][startCol]<<" ";
            count++;

        }
        startCol++;
}

    }
   
   
}



int main(){
    int a=1;

    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=a;
            a++;

        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            
            cout<<arr[i][j]<<" ";

        }
    }
    cout<<endl;
    sprial_print(arr);

}