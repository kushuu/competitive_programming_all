// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
        if(head == nullptr) return nullptr;
        if(!n) return head;
        if(head->next == nullptr) return nullptr;
        
        ListNode *back = head, *front = head, *sz = head;
        int size = 0;
        while(sz) {
            sz = sz->next;
            size++;
        }
        
        if(n == size) return head->next;
        
        while(n--) front = front->next;
        while(front->next) {
            front = front->next;
            back = back->next;
        }
        back->next = back->next->next;
        return head;
    }
};