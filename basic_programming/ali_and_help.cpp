#include <iostream>
using namespace std;
int main()
{
    char ch[9];
    int sum;
    for (int i = 0; i < 9; i++)
    {
        cin >> ch[i];
        if (i == 2 && (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'Y'))
        {
            cout << "invalid" << endl;
            return 0;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (i == 0 || i == 3 || i == 4 || i == 7)
        {
            sum = (ch[i] - '0') + (ch[i + 1] - '0');
            if (sum % 2 != 0)
            {
                cout << "invalid" << endl;
                return 0;
            }
        }
    }
    cout << "valid" << endl;
}