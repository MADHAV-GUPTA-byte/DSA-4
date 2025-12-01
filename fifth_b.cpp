#include <iostream>
#include <queue>
using namespace std;

class StackOneQueue {
    queue<int> q;
public:
    void push(int x){
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        if(!q.empty()) q.pop();
    }
    int top(){
        return q.empty() ? -1 : q.front();
    }
    bool empty(){
        return q.empty();
    }
};

int main(){
    StackOneQueue s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<endl;

    return 0;
}
