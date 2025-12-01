#include<iostream>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4};
    int top = 0;
    int element = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n-1;  i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[top] = element;
    for(int i = 0; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
