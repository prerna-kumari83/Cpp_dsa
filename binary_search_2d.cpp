#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    cout<<"enter number:"<<endl;
    cin>>x;
    bool found=false;

    
    vector<vector<int>>v{{2,4,6,8},{12,22,34,56},{65,67,68,69}};
    int row=v.size();
    int col=v[0].size();

    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<end){
        int element=v[mid/col][mid%col];
        if(element==x){
            cout<<x<<" is  found :-)";
            found=true;
            break;
        }
        else if(element>x){
            end=mid-1;
        }
        else{
            start=mid+1;

        }
        mid=start+(end-start)/2;
    
    }
    if(!found){
        cout<<"not found :-)";
    }

        

}