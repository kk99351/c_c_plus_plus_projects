#include <bits/stdc++.h>
using namespace std;
typedef struct nodes{
    char key;
    struct nodes *left;
    struct nodes *right;
}node;
typedef struct lli{
    node *add;
    struct lli *next;
}ll;
typedef struct STACKs{
    node *add;
    struct STACKs *next;
}STACK;
STACK *top;
node *root;
ll *head;
void push(node *add){
    STACK *temp = (STACK *)malloc(sizeof(STACK));
    if (temp){
        temp->add = add;
        temp->next = top;
        top = temp;
    }
    else{
        printf("Overflow Occur\n");
    }
}
node* pop(){
    STACK *temp = top;
    top = top->next;
    node *tmp = temp->add;
    free(temp);
    return tmp;
}
bool isemptySTACK(){
    if (top == NULL){
        return true;
    }
    return false;
}
void inorder_traversal(node *root){
    node *p = root;
    while(true){
        while(p->left != NULL){
            push(p);
            p = p->left;
        }
        if (p->left == NULL){
            cout<<"- ";
        }
        if (isemptySTACK()){
            break;
        }
        p = pop();
        cout<<p->key<<" ";
        p = p->right;
    }
}
void preorder_traversal(node *root){
    node *p = root;
    while(true){
        while(p->left != NULL){
            cout<<p->key<<" ";
            push(p);
            p = p->left;
        }
        if (p->left == NULL){
            cout<<"- ";
        }
        if (isemptySTACK()){
            break;
        }
        p = pop();
        p = p->right;
    }
}
void postorder_traversal(node *root){
    node *p = root;
    while(true){
        if (p->left != NULL){
            push(p);
            p = p->left;
        }
        else{
            if (isemptySTACK()){
                break;
            cout<<"- ";
            }
            else{
                if (((top->add)->right)->left == NULL){
                    p = pop();
                    cout<<"- ";
                    cout<<p->key<<" ";
                    if (isemptySTACK()){
                        break;
                    }
                    while(p == (top->add)->right){
                        cout<<(top->add)->key<<" ";
                        p = pop();
                        if (isemptySTACK()){
                            break;
                        }
                    }
                }
                if (isemptySTACK()){
                    break;
                }
                else{
                    p = (top->add)->right;
                }
            }
        }
    }
}
void fill(ll *head){
    node *temp = head->add;
    node *tm;
    ll *tmp = head->next;
    cout<<"Enter the key: ";
    cin>>temp->key;
    temp->left = (node *)malloc(sizeof(node));
    tm = temp->left;
    tm->left = NULL;
    tm->right = NULL;
    temp->right = (node *)malloc(sizeof(node));
    tm = temp->right;
    tm->left = NULL;
    tm->right = NULL;
    head->add = temp->left;
    head->next = (ll *)malloc(sizeof(ll));
    head = head->next;
    head->add = temp->right;
    head->next = tmp;
}
void creation(ll *head)
{
    ll *temp = head;
    ll *tmp;
    while(temp != NULL){
        tmp = temp;
        temp = temp->next;
        fill(tmp);
        preorder_traversal(root);
        cout<<endl;
        postorder_traversal(root);
        cout<<endl;
        inorder_traversal(root);
        cout<<endl;
    }
    creation(head);
}
int main(){
j    root = (node *)malloc(sizeof(node));
    root->left = root->right = NULL;
    head = (ll *)malloc(sizeof(ll));
    head->add = root;
    head->next = NULL;
    creation(head);
}