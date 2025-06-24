#include <iostream>
#include <vector>
using namespace std;
int main(){
    int target;
    cout<<"enter a number:";
    cin>>target;
    vector <vector<int>> v{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row=0;
    int col=v[0].size()-1;
    bool x=false;

    while(row<v.size() && col>=0){
        if(v[row][col]==target){
            cout<<"number is found";
            x=true;
            break;
        }
        else if(v[row][col]>target){
            col--;
        }
        else{
            row++;
        }

    }
    if(x==false){
        cout<<"number not found!";
    }

}