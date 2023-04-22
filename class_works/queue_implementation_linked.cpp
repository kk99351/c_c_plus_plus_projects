#include <iostream>
using namespace std;
typedef struct nodes
{
    int data;
    struct nodes *next;
} node;
node *front,*rear;
void insert(int data)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp)
    {
        if (front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
        temp->data = data;
        temp->next = NULL;
    }
    else
    {
        cout<<"overflow occur"<<endl;
    }
}
void delet()
{
    if (front == NULL)
    {
        cout<<"underflow occur"<<endl;
    }
    else{
        node *temp;
        temp = front;
        front = front->next;
        free(temp); 
    }      
}
void display()
{
    if (front == NULL)
    {
        cout<<"underflow occur"<<endl;
        return;
    }
    node *temp = front;
    cout<<"queue is: ";
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
start:
 cout<<"type following command for rerspected opration:"<<endl<<"INSERT: 0"<<endl<<"DELETE: 1"<<endl<<"DISPLAY: 2"<<endl;
 int input,data;
 cin>>input;
 switch(input)
 {
     case 0: cin>>data;
             insert(data);
             break;
     case 1: delet();
             break;
     case 2: display();
             break;
     default: break;
 }
 goto start;
}