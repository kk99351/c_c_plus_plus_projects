#include <bits/stdc++.h>
#include<ios>
#include<limits> 
using namespace std;
int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main()
{
    int t, sum, ones, sevens, i, temp;
    string str;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin>>str;
        for (i = 0; i < str.length(); i++)
        {
            temp = int(str.at(i) - '0');
            sum += arr[temp];
        }
        ones = sum / 2;
        sevens = sum % 2;
        if (sevens)
        {
            cout << 7;
        }
        else{
            cout << 1;
        }
        for (int i = 1; i < ones; i++)
        {
            cout << 1;
        }
        cout << endl;
    }
}