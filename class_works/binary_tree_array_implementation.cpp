#include <iostream>
using namespace std;
char tree[100];
void root(char key)
{
    if (tree[0] != '\0')
    {
        cout<<"root node is already present! \n";
    }
    else{
        tree[0] = key;
    }
}
void set_left(char key,int parent)
{
    if (tree[parent] != '\0'){
        tree[2*parent+1] = key;
    }
    else{
        cout<<"No key is present at "<<parent<<endl;
    }
}
void set_right(char key,int parent){
    if (tree[parent] != '\0'){
        tree[2*parent+2] = key;
    }
    else{
        cout<<"No key is present at "<<parent<<endl;
    }
}
void print_tree()
{
    for(int i=0;i<100;i++)
    {
        if (tree[i] == '\0'){
            cout<<"-";
        }
        else{
            cout<<tree[i];
        }
    }
    cout<<endl;
}
int main(){
    char key;
    int parent;
    int dirn;
    cout<<"enter root key: ";
    cin>>key;
    tree[0] = key; 
    print_tree();
    while(true){
        cout<<"key parent direction: ";
        cin>>key>>parent>>dirn;
        if (dirn)
        {
            set_right(key,parent);
            print_tree();
        }
        else{
            set_left(key,parent);
            print_tree();
        }
    }
}