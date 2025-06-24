   #include <iostream>
   using namespace std;
   int main(){

    long long x,n,m;
    cout<<"enter x number:";
    cin>>x;
    cout<<"enter n number:";
    cin>>n;
    cout<<"enter m number:";
    cin>>m;

    long long res=1;
    while(n>0){
        if(n&1){
            //odd

            res=(x*res)%m;
        }
        x=(x*x)%m;
        n=n>>1;


    }
    cout<<res;
    

   }