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
        if(head->next == nullptr) return nullptr;
        int length = 0;
        ListNode* lengthCounter = head;
        while(lengthCounter){
            length++;
            lengthCounter = lengthCounter->next;
        }
        ListNode* head1 = nullptr;
        int i = 0;
        ListNode* current = nullptr;
        while(head){
            if(i != (length - n)){
                ListNode* temp = new ListNode(head->val);
                if(head1 == nullptr){
                    head1 = new ListNode(head->val);
                    current = head1;
                }else{
                current->next = temp;
                current = temp;
                }
            }
            i++;
            head= head->next;
        }
        return head1;
    }
};