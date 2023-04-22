#include <stdio.h>
#include <stdlib.h>
char s[100];
typedef struct nodes{
    char data;
    struct nodes *link;
} node;
node *top = NULL;
void push(char data){
    node *ptr = (node*)malloc(sizeof(node));
    if (ptr){
        ptr->link = top;
        ptr->data = data;
        top = ptr;
    }
    else{
        printf("overflow occur\n");
    }
}
char pop(){
    char data;
    if (top == NULL)
    {
        printf("Underflow occur\n");
        return '\0';
    }
    else{
        node *ptr = top;
        top = top->link;
        data = ptr->data;
        free(ptr);
        return data;
    }
}
int pref_order(char ch)
{
    if(ch == '+' || ch == '-')
    {
        return 0;
    }
    else if(ch == '*' || ch == '/' || ch == '%')
    {
        return 1;
    }
    else if(ch = '^')
    {
        return 2;
    }
    return -1;
}
void display(){
    if (top == NULL)
    {
        printf("stack is empty\n");
    }
    else{
        node *ptr = top;
        while(ptr != NULL)
        {
            printf("%d,",ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
int main()
{
    char str[100];
    int i = 0;
    char ch,temp;
    do
    {
        scanf("%c",&ch);
        jmp1:
        switch (ch)
        {
        case '+': 
            temp = pop();
            if (temp == '\0' || temp == '(' || pref_order(temp)<pref_order(ch))
            {
                push(temp);
                push(ch);
            }
            else{
                str[i] = temp;
                i++;
                goto jmp1;
            }
            break;
        case '-':
            temp = pop();
            if (temp == '\0' || temp == '(' || pref_order(temp)<pref_order(ch))
            {
                push(temp);
                push(ch);
            }
            else{
                str[i] = temp;
                i++;
                goto jmp1;
            }
            break;
        case '*':
            temp = pop();
            if (temp == '\0' || temp == '(' || pref_order(temp)<pref_order(ch))
            {
                push(temp);
                push(ch);
            }
            else{
                str[i] = temp;
                i++;
                goto jmp1;
            }
            break;
        case '/':
            temp = pop();
            if (temp == '\0' || temp == '(' || pref_order(temp)<pref_order(ch))
            {
                push(temp);
                push(ch);
            }
            else{
                str[i] = temp;
                i++;
                goto jmp1;
            }
            break;
        case '%':
            temp = pop();
            if (temp == '\0' || temp == '(' || pref_order(temp)<pref_order(ch))
            {
                push(temp);
                push(ch);
            }
            else{
                str[i] = temp;
                i++;
                goto jmp1;
            }
            break;
        case '^':
            temp = pop();
            if (temp == '\0' || temp == '(' || pref_order(temp)<pref_order(ch))
            {
                push(temp);
                push(ch);
            }
            else{
                str[i] = temp;
                i++;
                goto jmp1;
            }
            break;
        case '(':
            push(ch);
            break;
        case ')':
            while((temp = pop()) != '(')
            {
                str[i] = temp;
                i++;
            }
            break;
        default:
            str[i] = ch;
            i++;
            break;
        }
    } while (ch != '\n');
    str[i] = '\0';
    printf("%s",str);
}