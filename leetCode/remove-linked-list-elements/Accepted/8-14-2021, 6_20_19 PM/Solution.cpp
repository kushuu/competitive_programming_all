// https://leetcode.com/problems/remove-linked-list-elements

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head->next and head->val == val) head = head->next;
        if(head->next == nullptr and head->val == val) return nullptr;
        
        ListNode *temp = head;
        while(temp) {
            while(temp->next and temp->next->val == val) temp->next = temp->next->next;
            temp = temp->next;
        }
        return head;
    }
};