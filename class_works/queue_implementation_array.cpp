#include <iostream>
#define MAX 5
using namespace std;
int queue[MAX];
int rear = -1;
int front = -1;
void insert(int num)
{
    if (rear == MAX-1)
    {
        cout<<"overflow occur"<<endl;
        return;
    }
    if (front == -1)
    {
        front++;
        rear++;
    }
    else{
        rear++;
    }
    queue[rear] = num;
}
void display()
{
    if (front == -1)
    {
        cout<<"underflow occur"<<endl;
        return;
    }
    cout<<"queue is : ";
    for (int i =front;i<=rear;i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}
void delet()
{
    if (front == -1)
    {
        cout<<"underflow occur"<<endl;
    }
    else{
        if (front == rear)
        {
            front = -1;
            rear = -1;
            return;
        }
        front++;
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