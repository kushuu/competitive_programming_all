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
        vector<int> check;
        ListNode* temp = head;
        while(temp) {
            check.push_back(temp->val);
            temp = temp->next;
        }
        
        temp = head;
        
        int size = check.size(), i = 0;
        if(size&1) {
            while(temp->next) {
                int ss = temp->val;
                temp->val = temp->next->val;
                temp = temp->next;
                temp->val = ss;
                temp = temp->next;
            }
        }
        else {
            while(temp) {
                int ss = temp->val;
                temp->val = temp->next->val;
                temp = temp->next;
                temp->val = ss;
                temp = temp->next;
            }
        }
        return head;
    }
};