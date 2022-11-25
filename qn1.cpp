#include <iostream>
using namespace std;
int main(){
    int Users_Number;
    cout<<"Enter Your Number:";
    cin>>Users_Number;
    if(Users_Number%2==0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
    return 0;
}