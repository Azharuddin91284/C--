#include<iostream>
using namespace std;
int main(){
    char arr[100]="Azharuddin";
    int i=0;
    while(arr[i] !='\0'){
        cout<<arr[i]<<"\n";
        i++;
    }


    cin>>arr;
    cout<<arr<<"\n";
    cout<<arr[3];

}

