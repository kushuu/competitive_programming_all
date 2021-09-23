// https://leetcode.com/problems/reverse-linked-list

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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        vector<int> check;
        ListNode *temp = head;
        while(temp) {
            check.push_back(temp->val);
            temp = temp->next;
        }
        reverse(check.begin(), check.end());
        temp = head;
        int i = 0, size = check.size();
        while(i < size) {
            temp->val = check[i++];
            temp = temp->next;
        }
        return head;
    }
};