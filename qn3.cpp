#include <iostream>
using namespace std;

int main(){
    string Users_Number;
    cout<<"Enter Your Number:";
    getline(cin,Users_Number);
    for(int i=0;i<Users_Number.length();i++){
        if(Users_Number[i] == Users_Number[Users_Number.length()-i-1]){
            cout<<"Number is a Palindrome";
            break;
        }
        else{
            cout<<"Number is not a Palindrome";
            break;
        }
    }
    return 0;
}