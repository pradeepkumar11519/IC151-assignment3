#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int Users_Decimal_Number;
    int temp;
    cout<<"Enter Your Decimal Number:";
    cin>>Users_Decimal_Number;
    temp = (int)log2(Users_Decimal_Number);
    for(int i=temp;i>=0;i--){
        if(Users_Decimal_Number>=pow(2,i)){
            Users_Decimal_Number = Users_Decimal_Number - pow(2,i);
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}