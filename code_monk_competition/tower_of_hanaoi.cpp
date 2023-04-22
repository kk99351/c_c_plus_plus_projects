#include <iostream>
using namespace std;
int max;
cout<<"number of disks: ";
cin>>max;
int stack[MAX],top = -1;
void push(int num){
    if (top == max-1)
    {
        printf("Overflow Occur\n");
    }
    else{
        top++;
        stack[top] =  num;
    }
}
void pop()
{
    if (top ==  -1)
    {
        printf("Underflow Occur\n");
    }
    else{
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else{
        for (int i=top;i>=0;i--){
            printf("%d,",stack[i]);
        }
        printf("\n");
    }
}
int main()
{

}