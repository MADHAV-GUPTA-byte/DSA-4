#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; ){
        cout<<i<<" ";
        for(int j = 0; j < 5;){
            cout<<j<<"  ";
            j++;
        }
        i++;
    }
    return 0;
}