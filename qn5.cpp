#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter Your Two Numbers in a Row With Space Between Them:";
    cin>>x>>y;
    cout<<"x,y "<<x<<" "<<y<<endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"x,y "<<x<<" "<<y<<endl;
    return 0;
}