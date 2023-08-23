#include<iostream>
using namespace std;

void addTwoNumbers(int num1, int num2){
    cout<<num1+num2;
    return;
}

int main(){
    int num1, num2;
    cin>>num1>>num2;

    addTwoNumbers(num1,num2);

    return 0;
}