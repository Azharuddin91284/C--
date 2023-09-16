#include<iostream>
using namespace std;

int main(){
    int a,b,ch;
    cout<<"Enter the value: ";
    cin>>a>>b;
    cout<<"Enter the choice";
    cin>>ch;
    if(ch==1){
        cout<<"Addition of two numbers are: "<<a+b<<endl;
    }else if (ch==2)
    {
        /* code */
        cout<<"Subtraction of two numbers are: "<<a-b<<endl;
    }
    else if (ch==3)
    {
        /* code */
        cout<<"Multiplication of two numbers are: "<<a*b<<endl;
    }
    else if (ch==4)
    {
        /* code */
        cout<<"Division of two numbers are: "<<a/b<<endl;
    }
    else if (ch==5)
    {
        /* code */
        cout<<"FloorDivision( gives Remainder value) of two numbers are: "<<a%b<<endl;
    }
    else{
        cout<<"increment the bothe values: "<<a+1<<endl<<b+1<<endl;
    }
    return 0;
     
}