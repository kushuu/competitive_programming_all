// https://leetcode.com/problems/reverse-nodes-in-k-group

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return nullptr;
        
        vector<int> check;
        ListNode *temp = head;
        while(temp) {
            check.push_back(temp->val);
            temp = temp->next;
        }
        int to_be_swapped = (check.size()/k)*k;
        for(int i = 0; i < to_be_swapped; i+=k) {
            reverse(check.begin()+i, check.begin()+i+k);
        }
        int i = 0;
        temp = head;
        while(temp) {
            temp->val = check[i];
            temp = temp->next; i++;
        }
        return head;
    }
};