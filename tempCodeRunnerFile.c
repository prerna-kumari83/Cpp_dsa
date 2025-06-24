#include <iostream>
using namespace std;
void print (int n){
    if(n==0) {
       return ;

    }
    cout<<n<<endl;
    print(n-1);
    

}

int  power(int n){
    if(n==0){
        return 1;

    }

    int small=power(n-1);
    int big=2*small;
    return big;
}
int fact(int n){
    if(n==0){
        return 1;

    }
    int small=fact(n-1);
    int big=n*small;
    return big;
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
//    cout<< power(n)<<endl<<fact(n);

    print(5);


}