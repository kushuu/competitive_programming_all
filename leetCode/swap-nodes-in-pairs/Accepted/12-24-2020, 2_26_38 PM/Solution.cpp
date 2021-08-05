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
                temp->val = check[i+1];
                temp = temp->next;
                temp->val = check[i];
                temp = temp->next;
                i += 2;
            }
        }
        else {
            while(temp) {
                temp->val = check[i+1];
                temp = temp->next;
                temp->val = check[i];
                temp = temp->next;
                i += 2;
            }
        }
        return head;
    }
};