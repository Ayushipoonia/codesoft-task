#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    char oper;
    cin>>num1;
    cin>>num2;
    cin>>oper;
    if(oper=='+'){
        cout<<num1+num2;
    }
    else if(oper=='-'){
        cout<<num1-num2;
    }
    else if(oper=='*'){
        cout<<num1*num2;
    }
    else if(oper=='/'){
        cout<<num1/num2;
    }
    else{
        cout<<"Invalid operator";
    }
}
