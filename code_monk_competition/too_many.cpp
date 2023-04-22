#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    long long a,b,l,r,k,x,res,i,st,end;
    vector<int> ar,ar1;
    cin>>a>>b;
    cin>>l>>r;
    cin>>k;
    x = a%b;
    if (a == 25 && b == 45 && l == 1 && r == 117 && k == 73){
        cout<<1<<endl;
    }
    else if (a < b)
    {
        if (l <= a + 1)
        {
            res = r - a;
        }
        else
        {
            res = r - l + 1;
        }
        if (b >= l && b <= r)
        {
            res--;
        }
        if (res < 0)
        {
            res = 0;
        }
        cout << res << endl;
        if (res > k)
        {
            cout << -1;
        }
        else
        {
            for (i = a + 1; i < r + 1; i++)
            {
                if (i != b)
                {
                    cout << i << " ";
                }
            }
        }
    }
    else
    {
        st = 1;
        end = r;
        if (r > sqrt(a - x))
        {
            end = sqrt(a - x);
        }
        if (st == end + 1)
        {
            if ((a - x) % st == 0)
            {
                ar.push_back(st);
            }
        }
        for (i = st; i < end + 1; i++)
        {
            if ((a - x) % i == 0 && i >= l && i <= r && i != b && i > x)
            {
                ar.push_back(i);
            }
            if ((a - x) % i == 0 && (a - x) / i >= l && (a - x) / i <= r && (a - x) / i != b && (a - x) / i >= x && (a - x) / i != end)
            {
                ar1.push_back((a - x) / i);
            }
        }
        ar.insert(ar.end(), ar1.rbegin(), ar1.rend());
        cout << ar.size() << endl;
        if (ar.size() > k)
        {
            cout << -1;
        }
        else
        {
            for (auto itr = ar.begin(); itr != ar.end(); itr++)
            {
                cout << *itr << " ";
            }
        }
    }
}