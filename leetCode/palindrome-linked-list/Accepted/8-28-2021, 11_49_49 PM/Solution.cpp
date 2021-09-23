// https://leetcode.com/problems/palindrome-linked-list

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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr) return true;
        ListNode *temp = head;
        int size = 0;
        vector<int> check;
        while(temp) {
            check.push_back(temp->val);
            temp = temp->next;
            size++;
        }
        for(int i = 0; i < size/2; i++) if(check[i] != check[size-1-i]) return false;
        return true;
    }
};