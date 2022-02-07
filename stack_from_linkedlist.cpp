#include <bits/stdc++.h>
using namespace std;
class StackNode{
    public:
    int data;
    StackNode* next;
};
int isEmpty(StackNode* root){if(root==NULL)return 0;
    else return 1;
}
int top(StackNode* root){
    if(root==NULL)return -1;
    return root->data;
}
StackNode* newNode(int data){
    StackNode* newnode=new StackNode();//CPP
    //struct StackNode* newnode=(struct StackNode*)malloc(sizeof(struct StackNode));//C using structures;
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void push(StackNode** root,int data){
    StackNode* newnode=newNode(data);
    newnode->next=*root;
    *root=newnode;
    cout<<data<<"  Pushed  into the stack"<<endl;
    
}
int pop(StackNode** root){
    if(*root==NULL)return -1; 
    StackNode* temp=*root;
    *root=(*root)->next;
    int res=temp->data;
    free(temp);
    return res;
}
int main() {
    StackNode* root=NULL;
    push(&root,10);
    push(&root,20);
    push(&root,30);
    push(&root,40);
    cout<<endl;
    while(isEmpty(root)){
        cout<<top(root)<<endl;
        pop(&root);
    }
    
}
