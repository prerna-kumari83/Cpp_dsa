#include <iostream>
using namespace std;
int main(){
    int i=0;
    int ans=0;
    int n;
    int p=1;
    cout<<"enter number";
    cin>>n;
    while(n!=0){
        int bit=n&1;
        cout<<bit<<"\t";
        ans=(bit*p)+ans;
        n=n>>1;
        p=p*10;
        i++;
    }
    cout<<"\nanswer is:"<<ans;
}