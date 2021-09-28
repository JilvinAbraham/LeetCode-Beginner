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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* fast = head;
        ListNode* slow = head; 
        ListNode* temp = head;
      
        while(n--){
            fast = fast->next;
        }    
        
        while(fast){
            temp = slow;
            slow = slow->next;
            fast = fast->next;
        }
        
        //To delete first node
        if(slow == head){
            head = head->next;
            return head;
        }
        
        //To delete last node
        if(slow->next == NULL){
            temp->next = NULL;
            return head;
        }
        
        slow->val = slow->next->val;
        slow->next = slow->next->next;
        return head;
        
    }
};