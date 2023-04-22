#define MAX 100
#include <stdio.h>
int stack[MAX],top = -1;
void push(int num){
    if (top == MAX-1)
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
    start:
    printf("type following command for respected operation: \n");
    printf("PUSH: 0\n");
    printf("POP: 1\n");
    printf("DISPLAY: 2\n");
    int op;
    scanf("%d",&op);
    switch (op)
    {
    case 0:
        int opp;
        printf("enter number: ");
        scanf("%d",&opp);
        push(opp);
        break;
    case 1:
        pop();
        break;
    case 2:
        display();
        break;
    default:
        printf("You typed incorrect command");
        break;
    }
    goto start;
}