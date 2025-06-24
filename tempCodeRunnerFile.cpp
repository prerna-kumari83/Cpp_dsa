#include <iostream>
#include <string>

using namespace std;


void reverseStr(string &str,int s,int e){

    if(s>=e){

        return ;

    }
    else{

        swap(str[s],str[e]);
        reverseStr(str,s+1,e-1);
    }
}

bool isPalindrom(string str ,int s,int e){
    if(s>=e){
        return true;
    }


    if(str[s]!=str[e]){
        return false;
    }
    else{
        return isPalindrom(str,s+1,e-1);
    }



}


 


int main(){

    string  name="appleelpp9";     // char name[6] = "prerna";  // Correct way to store a string in a character array.

    int n=name.length();

    // cout<<"before:"<<name<<endl;
    // reverseStr(name,0,name.length()-1);
    // cout<<"After:"<<name;

    if(isPalindrom(name,0,n-1))
    {

        cout<<"palindrom";
    }
    else
    {
        cout<<" Not palindrom";
    }



}