/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode(0);
        ListNode* p=res;
        int c=0;//进位
        while(l1!=NULL&&l2!=NULL){
            p->val=l1->val+l2->val+c;
            c=p->val/10;
            p->val%=10;
            if(!(l1->next==NULL&&l2->next==NULL)){
                p->next=new ListNode(0);
                p=p->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            p->val=l1->val+c;
            c=p->val/10;
            p->val%=10;
            if(!(l1->next==NULL)){
                p->next=new ListNode(0);
                p=p->next;
            }
            l1=l1->next;
        }
        while(l2!=NULL){
            p->val=l2->val+c;
            c=p->val/10;
            p->val%=10;
            if(!(l2->next==NULL)){
                p->next=new ListNode(0);
                p=p->next;
            }
            l2=l2->next;
        }
        while(c!=0){
            p->next=new ListNode(c%10);
            p=p->next;
            c/=10;
        }
        return res;
    }
};
