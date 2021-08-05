// https://leetcode.com/problems/intersection-of-two-linked-lists

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // cout << skipA;
        ListNode *tempA = headA, *tempB = headB;
        
        if(!tempA || !tempB) return nullptr;
        
        set<ListNode*> checkA;
        while(tempA) {
            checkA.insert(tempA);
            tempA = tempA->next;
        }
        
        while(tempB) {
            if(checkA.find(tempB) != checkA.end()) return tempB;
            tempB = tempB->next;
        }
        return nullptr;
    }
};