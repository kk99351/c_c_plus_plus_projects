#include <iostream>
using namespace std;
typedef struct nodes{
    int data;
    struct nodes *link;
} node;
node *top1,*top2,*top3;
void push(int data,node *top)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp)
    {
        temp->data = data;
        temp->link = top;
        top = temp;
    }
    else{
        cout<<"overflow occur"<<endl;
    }
}
int pop(node *top)
{
    int data;
    if (top == NULL)
    {
        cout<<"underflow occur"<<endl;
        data = -1;
    }
    else{
        node *temp = top;
        top = top->link;
        data = temp->data;
        free(temp);
    }
    return data;
}
void display(node *top)
{
    if (top == NULL)
    {
        cout<<"underflow occur"<<endl;
    }
    else{
        node *temp = top;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->link;
        }
        cout<<endl;
    }
}
void tower_of_hanoi(int n,node *a,node *b,node *c)
{
    if (n == 1)
    {
        push(pop(a),c);
    }
    else{
        tower_of_hanoi(n-1,a,c,b);
        tower_of_hanoi(1,a,b,c);
        tower_of_hanoi(n-1,b,a,c);
    }
    cout<<"tower a:";
    display(a);
    cout<<"tower b";
    display(b);
    cout<<"tower c";
    display(c);
}
int main()
{   
    push(1,top1);
    push(2,top1);
    push(3,top1);
    tower_of_hanoi(3,top1,top2,top3);
}