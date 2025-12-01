#include<iostream>
using namespace std;
#define MAX 10

class Menu{
    public:
    int arr[MAX];
    int top;
    int rear;
    int top=-1;
    int rear=-1;
    bool isFull(){
        if(rear==MAX-1)
            return true;
        }
    bool isEmpty(){
        if(top==-1)
            return true;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
        }
        else{
            rear++;
            arr[rear]=val;
            if(top==-1)
                top=0;
        }
    }
    int dequeue(){
        int x=-1;
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
        }
        else{
            int x=arr[top];
            cout<<"Dequeued element is: "<<x<<endl;
                top=top+1; 
        }
        if (top>rear){
            top=-1;
            rear=-1;
        }
        return x;
    }
    


};
