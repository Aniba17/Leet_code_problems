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
  

	int count=0;
	
		ListNode *temp=head;
		while(temp!=NULL){
			
			temp=temp->next;
			count++;
		}temp=head;
		if(count==1){
			
			delete head;
            return nullptr;
		}

      if (n == count) {
    ListNode* temp = head;  
    head = temp->next;     
    delete temp;           
    return head;           
}



	else{	
		int track=count-n;
		count=1;
		
		temp=head;
		while(count!=track){
			temp=temp->next;
           count++;
        }
    temp->next = temp->next->next;


		return head;	
		}
		
	
    
	
    }
};