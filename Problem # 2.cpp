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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); 
        ListNode* current = dummyHead;
        ListNode* temp = l1;
        ListNode* temp1 = l2;
        bool check = false;  
        int sum = 0;

        while (temp != nullptr || temp1 != nullptr) {
            int val1 = (temp != nullptr) ? temp->val : 0;  
            int val2 = (temp1 != nullptr) ? temp1->val : 0; 
            if (check) {
                sum = val1 + val2 + 1;  
                check = false;  
            } else {
                sum = val1 + val2;
            }

            if (sum >= 10) {
                sum = sum - 10;
                check = true; 
            }

            current->next = new ListNode(sum);  
            current = current->next; 

          
            if (temp != nullptr) temp = temp->next;
            if (temp1 != nullptr) temp1 = temp1->next;
        }

        if (check) {
            current->next = new ListNode(1);
        }

        return dummyHead->next;  
    }
};
