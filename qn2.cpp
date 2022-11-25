#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Your Numbers in a Row With Space between Each Number:";
    cin>>a>>b>>c;
    int result = a;
    if(b>a){
        result = b;
    }
   if(c>b){
        result = c;
    }
    cout<<result;
    return 0;
}