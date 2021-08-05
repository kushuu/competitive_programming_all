// https://leetcode.com/problems/swap-nodes-in-pairs

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
        if(head == NULL) return head;
        ListNode* temp = head;
        
        while(temp->next) {
            int ss = temp->val;
            cout << ss << " " ;
            temp->val = temp->next->val;
            temp = temp->next;
            temp->val = ss;
            if(temp->next) temp = temp->next;
        }
        return head;
    }
};