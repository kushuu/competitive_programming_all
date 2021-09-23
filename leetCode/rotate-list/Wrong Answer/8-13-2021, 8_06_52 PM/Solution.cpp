// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 0;
        if(head == nullptr) return head;
        if(!k) return head;
        if(head->next == nullptr) return head;
        
        ListNode *temp = head;
        while(temp) {
            size++;
            temp = temp->next;
        }
        
        if(k == size) return head;
        
        k %= size;
        
        ListNode *front = head, *back = head;
        ListNode *follow = back;
        while(k-- > 1) front = front->next;
        while(front->next) { 
            front = front->next; 
            follow = back;
            back = back->next;
        }
        follow->next = nullptr;
        front->next = head;
        return back;
        
    }
};