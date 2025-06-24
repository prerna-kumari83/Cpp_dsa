#include <iostream>
#include <string>
using namespace std;
int main(){

    string a="tootnty";
    int i=0;

   while(i<a.length()){

        if(a[i]==a[i+1]){
            a.erase(i,2);
            i=0;
            
        }
        else{
            i++;
        }
       



   }
   cout<<a;



}