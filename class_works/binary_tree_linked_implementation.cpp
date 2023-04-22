#include <iostream>
using namespace std;
typedef struct nodes{
    struct nodes *left;
    struct nodes *right;
    char key;
}node;
node *root_node,*get_parent;
int position;
int i = 0;
void get_node(node *root_node)
{
    if (i==position){
        get_parent = root_node;
    }
    int temp;
    temp = i;
    if (root_node->left)
    {
        i = i*2+1;
        get_node(root_node->left);
    }
    i = temp;
    if (root_node->right)
    {
        i = i*2+2;
        get_node(root_node->right);
    }
}
void root(char key)
{
    if (root_node != NULL)
    {
        cout<<"root node is already filled"<<endl;
    }
    else{
        root_node = (node *)malloc(sizeof(node));
        root_node->key = key;
        root_node->left = NULL;
        root_node->right = NULL; 
    }
}
void set_left(char key,int parent){
    position = parent;
    i = 0;
    node *temp;
    get_parent = NULL;
    get_node(root_node);
    if (get_parent){
        temp = get_parent->left;
        if (temp){
            temp->key = key;
        }
        else{
            temp = (node *)malloc(sizeof(node));
            get_parent->left = temp;
            temp->key = key;
            temp->left = NULL;
            temp->right = NULL;
        }
    }
    else{
        cout<<"there in no node at "<<parent<<endl;
    }
}
void set_right(char key,int parent){
    position = parent;
    i = 0;
    node *temp;
    get_parent = NULL;
    get_node(root_node);
    if (get_parent){
        temp = get_parent->right;
        if (temp){
            temp->key = key;
        }
        else{
            temp = (node *)malloc(sizeof(node));
            get_parent->right = temp;
            temp->key = key;
            temp->left = NULL;
            temp->right = NULL;
        }
    }
    else{
        cout<<"there is no node at "<<parent<<endl;
    }
}
void traversal(node *root_node)
{
    if (root_node){
        cout<<root_node->key<<" ";
        traversal(root_node->left);
        traversal(root_node->right);
    }
    else{
        cout<<"- ";
    }
}
int main()
{
    char key;
    int parent,dirn;
    cout<<"enter root node: ";
    cin>>key;
    root(key);
    traversal(root_node);
    cout<<endl;
    while(true){
        cout<<"key parent direction: ";
        cin>>key>>parent>>dirn;
        if (dirn){
            set_right(key,parent);
            traversal(root_node);
            cout<<endl;
        }
        else{
            set_left(key,parent);
            traversal(root_node);
            cout<<endl;
        }
    }
}