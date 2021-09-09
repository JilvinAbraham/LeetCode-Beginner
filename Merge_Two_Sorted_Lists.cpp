/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        ListNode* d = new ListNode(0,NULL);
        ListNode* t = d;
        
        while(h1 && h2){
            
            if(h1->val <= h2->val){
                d->next = h1;
                h1 = h1->next;
                d = d->next;
            }
            else{
                d->next = h2;
                h2 = h2->next;
                d = d->next;
            }
        }
        
        if(h1){
            d->next = h1;
        }
        if(h2){
            d->next = h2;
          
        }
        return t->next;
        
        
        
    }
};