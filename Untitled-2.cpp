#include <iostream>
using namespace std;
int main(){

    int x;
    bool flag=false;
    cout<<"enter number :";
    cin>>x;
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            flag=true;
            

        }

    }

    if(flag){
        cout<<"not a prime number!";

    }
    else{
        cout<<"prime number!";
    }


}