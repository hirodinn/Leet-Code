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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* head1 = nullptr;
        ListNode* current = nullptr;
        while(head != nullptr && head->next != nullptr){
            ListNode* temp = head->next->next;
            if(head1 == nullptr){
                head1 = head->next;
                head1->next = head;
                current = head1->next;
                current->next = nullptr;
            }else{
                current-> next = head->next;
                current -> next -> next= head;
                current = current->next->next;
                current->next = nullptr;
            }
            head = temp;
        }
        if(head != nullptr){
            current->next = head;
        }
        return head1;
    }
};