// https://leetcode.com/problems/remove-duplicates-from-sorted-list

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        while(head->val == head->next->val) head = head->next;
        
        ListNode* temp = head;
        while(temp and temp->next) {
            while(temp->next and temp->next->val == temp->val) temp->next = temp->next->next;
            temp = temp->next;
        }
        return head;
    }
};