#include<iostream>
using namespace std;

void printTable(int num){
    for(int i = 1; i < 11; i++){
        cout<< num * i << " ";
    }
    return;
}

int main(){
    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    printTable(num1);
    printTable(num2);
    printTable(num3);

    return 0;
}