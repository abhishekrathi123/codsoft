#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    char ch;
    cout<<"enter the first number = ";
    cin>>a;
    cout<<"enter the second number = ";
    cin>>b;
    cout<<"enter the operation you want to perform (+,-,*,/) = ";
    cin>>ch;
    switch (ch)
    {
    case '/' :
        cout<<"answer is = ";
        c=a/b;
        cout<<c;
        break;
    case '*' :
        cout<<"answer is = ";
        c=a*b;
        cout<<c;
        break;    
    case '+' :
        cout<<"answer is = ";
        c=a+b;
        cout<<c;
        break;
    case '-' :
        cout<<"answer is = ";
        c=a-b;
        cout<<c;
        break;    
    default:
        cout<<"Error!! operation is not correct ";
        break;
    }
    
    return 0;
}