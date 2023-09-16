#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value: ";
    cin>>a>>b;
    if(a==b){
        cout<<"Bothe are equal: "<<a<<endl;
    }
    else{
        if(a>b){
        cout<<"A is how much  greater than B: "<<a-b;
    }
    else{
        cout<<"B is how much less than A: "<<a-b;
    }
    }
    return 0;
}