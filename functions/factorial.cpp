#include<iostream>
using namespace std;

int factorail(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
       fact = fact * i;
    }
    return fact;
}

int main(){
    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    cout<<factorail(num1)<<endl;
    cout<<factorail(num2)<<endl;
    cout<<factorail(num3)<<endl;

    return 0;
}