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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }

      
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

     
        ListNode* temp = list1;
        ListNode* temp1 = list2;

        
        while (temp != nullptr && temp1 != nullptr) {
          
            if (temp->val < temp1->val) {
                tail->next = new ListNode(temp->val);
                tail = tail->next;
                temp = temp->next; 
            } 
           
            else if (temp->val == temp1->val) {
                tail->next = new ListNode(temp->val);
                tail = tail->next;
                temp = temp->next; 
            } 
           
            else {
                tail->next = new ListNode(temp1->val);
                tail = tail->next;
                temp1 = temp1->next;
            }
        }

       
        while (temp != nullptr) {
            tail->next = new ListNode(temp->val);
            tail = tail->next;
            temp = temp->next;
        }

        while (temp1 != nullptr) {
            tail->next = new ListNode(temp1->val);
            tail = tail->next;
            temp1 = temp1->next;
        }

        return dummy->next; 
    }
};