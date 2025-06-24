#include <iostream>
using namespace std;
int sum_row(int arr[3][3],int r){
    int sum=0;
    
        for(int j=0;j<3;j++){
            sum=sum+arr[r][j];
        }
        return sum;
    
}


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<" "<<"sum:"<<sum_row(arr,i)<<endl;
    }
    
    
} 