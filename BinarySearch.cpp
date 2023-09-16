#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n, int key){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key);

}

/*Time Complexity:
After first iteration, length of array=n
After second iteration, length of array=n/2
After 3rd iteration, length of array=(n/2)/2=n/4
After k iterations,length of array=n/2**k  
Let the length of array become 1 after kmiterations
n/2**k=1
n=2**k
log(n) base 2 = log(2**k) base 2
log(n)=k.log(2) base 2

Time complexity== 0(log(n) base 2  < 0(n)
=>  k= log(n) base 2  time complexity */