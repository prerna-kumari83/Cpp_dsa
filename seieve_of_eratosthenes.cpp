#include <iostream>
#include <vector>

using namespace std;
int main(){

       int n;
       cout<<"enter a numer:";
       cin>>n;
       int count=0;
       vector<bool> v(n+1,true);
       v[0]=false;
       v[1]=false;
       for(int i=2;i<n;i++){
        if(v[i]){
            count++;
            for(int j=2*i;j<n;j=i+j){
                v[j]=false;
            }

        }
    }
    cout<<"total number of prime before: "<<count;

       

}