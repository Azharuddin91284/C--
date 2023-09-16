#include<iostream>
using namespace std;

int main(){
    int a,b,ch;
    cout<<"Enter the two Number: ";
    cin>>a>>b;
    cout<<"Enter the choice: ";
    cin>>ch;
    switch (ch)
    {
    case 1:
    cout<<"Addition of two number: "<<a+b;
        break;

        case 2:
        cout<<"Subtraction of two number: "<<a-b;
        break;

         case 3:
        cout<<"Multiplication of two number: "<<a*b;
        break;

         case 4:
        cout<<"Division of two number: "<<a/b;
        break;

         case 5:
        cout<<"Floor DIvision of two number: "<<a%b;
        break;
    
    default:
    cout<<"My name is Azharuddin Ansari: ";

        break;
    }

}