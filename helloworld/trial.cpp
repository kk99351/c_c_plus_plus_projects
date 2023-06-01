#include <bits.stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct 
}
int main(){
    ListNode *list;
        while(list1 != NULL && list2 != NULL){
            if (list1->val > list2->val){
                list->next = list2;
                list2 = list2->next;
            }
            else{
                list->next = list1;
                list1 = list1->next;
            }
            list = list->next;
        }
        while(list1 != NULL){
            list->next = list1;
            list1 = list1->next;
            list = list->next;
        }
        while(list2 != NULL){
            list->next = list2;
            list2 = list2->next;
            list = list->next;
        
}