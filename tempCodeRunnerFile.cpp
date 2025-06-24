#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(vector<int>num,vector<vector<int>> &ans,int index){

    //bace case 

    if(index>=num.size()){
        ans.push_back(num);
        return ;

    }


    for(int i=index;i<num.size();i++){

        swap(num[index],num[i]);
        solve(num,ans,index+1);
    
        swap(num[i],num[index]);
    }


}




int main(){
     
    vector<int> num={1,2,3};

    vector <vector<int>> ans;
    int index=0;
    solve(num,ans,index);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j] <<" ";
        }
        cout<<endl;
    }


}