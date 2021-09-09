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
    bool isPalindrome(ListNode* head) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while( fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
     
        slow = reverse(slow);
        fast = head;
        
        while(slow != NULL){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        
        while(current != NULL){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        return prev;
    }
};