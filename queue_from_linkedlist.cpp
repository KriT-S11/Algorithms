#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){data=d;next=NULL;}
};

struct Queue{
    Node *front,*rear;
    Queue(){front=NULL;rear=NULL;}
    
    void enqueue(int data){
        Node* temp=new Node(data);
        if(rear==NULL){front=rear=temp;return;}
        rear->next=temp;
        rear=temp;
    }
    void dequeue(){
        if(front==NULL){return;}
        Node* temp=front;
        front=front->next;
        
        if(front==NULL){rear=NULL;}
        delete(temp);
        
    }
};
int main() {
 Queue q;
 q.enqueue(10);
 q.dequeue();
 q.enqueue(20);
 q.dequeue();
 q.enqueue(30);
 q.dequeue();
 q.enqueue(40);
 q.dequeue();
 q.enqueue(50);

 
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
    
}
