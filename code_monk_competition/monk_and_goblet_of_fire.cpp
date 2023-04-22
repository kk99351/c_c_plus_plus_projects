#include <iostream>
#include <queue>
using namespace std;
int main(){
    int q,x,y;
    char c;
    cin>>q;
    queue<pair<int,int>> s[5],sp;
    while(q--){
        cin>>c;
        if (c=='E'){
            cin>>x>>y;
            if (s[x].empty()){
                s[x].push(make_pair(x,y));
                sp.push(make_pair(x,y));
            }
            else{
                s[x].push(make_pair(x,y));
            }
        }
        else{
            int x = sp.front().first;
            cout<<s[x].front().first<<" "<<s[x].front().second<<endl;
            s[x].pop();
            if (s[x].empty()){
                sp.pop();
            }
        }
    }    
}
/**
#include <iostream>
typedef struct linked
{
    int x,y;
    struct linked *prev;
    struct linked *next;
}ll;
using namespace std;
int main(){
    int q,x,y;
    char c;
    cin>>q;
    ll *nll = new ll();
    ll *front = nll;
    nll->prev = NULL;
    nll->next = NULL;
    cin>>c>>x>>y;
    nll->x = x;
    nll->y = y;
    q--;
    while(q--){
        cin>>c;
        if (c == 'E'){
            cin>>x>>y;
            ll *tmm = nll;
            while(tmm->prev != NULL){
                if (tmm->x == x){
                    ll *tm = new ll();
                    tm->x = x;
                    tm->y = y;
                    tm->next = tmm->next;
                    tm->prev = tmm;
                    tmm->next = tm;
                    break;
                }
                tmm = tmm->prev;
            }
            if (tmm->prev == NULL){
                if (tmm->x == x){
                    ll *tm = new ll();
                    tm->x = x;
                    tm->y = y;
                    tm->next = tmm->next;
                    tm->prev = tmm;
                    tmm->next = tm;
                }
                else{
                    ll *tm = new ll();
                    tm->x = x;
                    tm->y = y;
                    tm->next = nll->next;
                    tm->prev = nll;
                    nll->next = tm;
                }
            }
        }
        else{
            ll *tm=front->next;
            tm->prev = NULL;
            free(front);
            front = tm;
            while(tm != NULL){
                cout<<x<<" "<<y<<endl;
                tm = tm->next;
            }
        }
    }
}
 * 
 */
