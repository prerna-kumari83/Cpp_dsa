#include <iostream>
using namespace std;

void print(int *p){
   cout<<p;
}
void update(int *p){
   p=p+1;
   cout<<p<<endl;
}

int main(){

   int arr[10]={2,3,4,6,1};

   int *ptr=arr;
   
   cout<<"before value:"<<arr<<endl;
   update(ptr);
   cout<<"after value:"<<ptr;


   

}