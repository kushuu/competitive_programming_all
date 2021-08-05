// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        if(temp == nullptr) return nullptr;
    
        int ctr = 1, size = 0;
        ListNode* first, *second;
        first = head;
        second = head;
        
        while(temp) {
            temp = temp->next;
            size++;
        }
        temp = head;
        k = min(k, size-k);

        while(ctr <= k) {
            temp = temp->next;
            second = second->next;
            ctr++;
        }
        
        first = temp;
        temp = head;
        
        // cout << first->val << " " << second->val << " " << temp->val;
        
        while(second->next) {
            temp = temp->next;
            second = second->next;
        }
        // cout << second->val << " " << temp->val;
        swap(first->val, temp->val);
        return head;
    }
};