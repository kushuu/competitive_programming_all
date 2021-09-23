// https://leetcode.com/problems/delete-node-in-a-linked-list

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
    void deleteNode(ListNode* node) {
        ListNode *temp = node, *follow = node;
        while(temp->next) {
            temp->val = temp->next->val;
            follow = temp;
            temp = temp->next;
        }
        follow->next = nullptr;
    }
};