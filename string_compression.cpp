#include <iostream>
#include <string>
#include <vector>
using namespace std;
int rev(int num){
    int  reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int count(string s){
    int i=0;
    int n=s[0];
    int count=0;
    while(i<s.length()){
        if(n==s[i]){
            count++;
        }
         else{
            break;
        }
         i++;
    }
    
    return (count);

}

int main() {
   string s="aaaaaapccddddddddddddddddddddddddddddddddddddddddddddddddddddddddddde";
   vector <string>v;
   while(s.length()!=0){
        v.push_back(string(1,s[0]));     
        string x=to_string(count(s));   //string will change the char to string object suntex shoul be same else string error will occer.
        
        if(count(s)==1){
             s.erase(0, 1);
            continue;

        }
        else if(count(s)>=10){
            int n=rev(count(s));
            while(n!=0){
                int a=n%10;
                string z=to_string(a);
                v.push_back(z);
                n=n/10;

            }
            

            
        }
        else{
            v.push_back(to_string(count(s)));
        }
       

       
        //to_string converts a numeric value to a string, not a character.
        // cout<<endl<<count(s)<<endl;
        s.erase(0,count(s));

   }
    for(int i=0;i<v.size();i++){{
        cout<<v[i]<<" ";
    }}
   
}


// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int main(){
//     vector<string>v={"tony"};
//     v.push_back("o");
//     for(int i=0;i<v.size();i++){
//         cout<<v[i];
//     }
// }