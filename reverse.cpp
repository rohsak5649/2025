#include <iostream>
using namespace std ;
int main(){
    int num , revNum = 0;
    cout<<"Please enter the Number : ";
    cin>>num;

    while(num != 0 ){
        int digit =  num % 10 ;
        revNum = revNum * 10 + digit;
        num = num / 10 ;

    }

    cout<<"Reverse Number"<<revNum;
}
