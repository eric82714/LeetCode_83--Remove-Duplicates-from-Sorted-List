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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode* result; 
        
        result = head;
        
        while(result) {
            if(result->next && result->val == result->next->val) {
                result->next = result->next->next;
            }
            else {
                result = result->next;
            }
        }                
        return head;        
    }
};
