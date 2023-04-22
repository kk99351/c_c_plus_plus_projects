#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if (str[i] < 95){
            str[i] = str[i] + 32;
        }
        else{
            str[i] = str[i] -32;
        }
    }
    cout<<str;
}