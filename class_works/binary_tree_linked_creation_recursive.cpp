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
node *root;
ll *head;
void preorder_traversal(node *root){
    if (root->left || root->right){
        cout<<root->key<<" ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
    else{
        cout<<"- ";
    }
}
void postorder_traversal(node *root){
    if (root->left || root->right){
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout<<root->key<<" ";
    }
    else{
        cout<<"- ";
    }
}
void inorder_traversal(node *root){
    if (root->left || root->right){
        inorder_traversal(root->left);
        cout<<root->key<<" ";
        inorder_traversal(root->right);
    }
    else{
        cout<<"- ";
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
    root = (node *)malloc(sizeof(node));
    root->left = root->right = NULL;
    head = (ll *)malloc(sizeof(ll));
    head->add = root;
    head->next = NULL;
    creation(head);
}