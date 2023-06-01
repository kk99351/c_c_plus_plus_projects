#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col){
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col = 0;col<4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout<<endl
}
// colwise sum
void printSum(int arr[][4], int row, int col){
    for(int col=0; col<4; col++){
        int sum = 0;
        for(int row = 0;row<3; row++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout<<endl
}
//largest row sum
int largestRowSum(int arr[][3], int row, int col){
    int maxii = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col = 0;col<4; col++){
            sum += arr[row][col];
        }
        if (sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
}
int main(){
    int arr[3][4];
    //taking input row -> row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //taking input col -> col wise input
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}