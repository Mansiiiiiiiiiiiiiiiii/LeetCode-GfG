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
        // Brute force approach
    //     int cnt =0;
    //     ListNode* temp = head;

    //     // Count total number of nodes
    //     while(temp != NULL){
    //         cnt++;
    //         temp = temp->next;
    //     }
    //     if(cnt == n){
    //      ListNode* newHead = head->next;
          
    //         return newHead;
    //     }

    //      // Find the (cnt - n)th node
    //     int res = cnt - n;
    //     temp = head;
    //     while(--res>0){
           
    //         temp = temp->next;

    // }
    //   // Delete the node
    // ListNode* delNode = temp->next;
   
    // temp->next = temp->next->next;
    // delete delNode;
    // return head;




ListNode* dummy = new ListNode(0,head);
ListNode* fast = dummy;
ListNode* slow = dummy;

// Move fast pointer n+1 steps ahead to maintain a gap
for(int i=0; i<=n; i++){
    fast = fast->next;
}

// Move both pointers until fast reaches the end
while(fast != NULL){
    fast = fast->next;
    slow = slow->next;
}

// Remove the node
ListNode* delNode = slow->next;
slow->next = slow->next->next;
delete delNode;

ListNode* newHead = dummy->next;
delete dummy;

return newHead;
    }  
};