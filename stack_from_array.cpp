#include <bits/stdc++.h>
#define max 1000
using namespace std;
class Stack{
    int top;
public:
    int arr[max];
    Stack(){top=0;}
    bool push(int data);
    int pop();
    int peek();
    bool isEmpty();
    
};
bool Stack::push(int data){
    if(top>=(max-1)){cout<<"Stack overflow"<<endl;return false;}
    else {
        arr[top]=data;
        top++;
        return true;
    }
}

int Stack::pop(){
    if(top<0){cout<<"Stack Underflow"<<endl;return 0;}
    else {
        int data=arr[top];top--;
        return data;
    }
}

int Stack::peek(){
    if(top<0){cout<<"STack is Empty"<<endl;return 0;}
    else{
        int x=arr[top-1];
        return x;
    }
    
}

bool Stack::isEmpty(){
    return (top<0);
    
}

int main() {
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.isEmpty()){
        cout<<s.peek()<<endl;
        s.pop();
    }
    
}
