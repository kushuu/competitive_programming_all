// https://leetcode.com/problems/linked-list-cycle

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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        
        unordered_set<ListNode*> check;
        ListNode *temp = head;
        while(temp) {
            if(check.find(temp) == check.end()) check.insert(temp);
            else return true;
            
            temp = temp->next;
        }
        return false;
    }
};