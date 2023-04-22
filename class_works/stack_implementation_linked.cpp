#include <stdio.h>
#include <stdlib.h>
typedef struct nodes {
    int data;
    struct nodes *link;
} node;
node *top;
void push(int num)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp)
    {
        temp->data = num;
        temp->link = top;
        top = temp;
    }
    else{
        printf("Overflow Occur\n");
    }
}
void pop(){
    if (top == NULL)
    {
        printf("unfderflow Occur\n");
    }
    else{
        node *temp = top;
        top = top->link;
        free(temp);
    }
}
void display(){
    if(top == NULL)
    {
        printf("Empty Stack\n");
    }
    else{
        node *temp = top;
        while(temp != NULL)
        {
            printf("%d,",temp->data);
            temp = temp->link;
        }
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