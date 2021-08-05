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
        ListNode *tempA = headA, *tempB = headB;
        if(!tempA || !tempB) return nullptr;
        
        // attempt #1 : using O(N) space.

//         set<ListNode*> checkA;
//         while(tempA) {
//             checkA.insert(tempA);
//             tempA = tempA->next;
//         }

//         while(tempB) {
//             if(checkA.find(tempB) != checkA.end()) return tempB;
//             tempB = tempB->next;
//         }
//         return nullptr;
        
        int sizeA = 0, sizeB = 0;
        while(tempA) {
            sizeA++;
            tempA = tempA->next;
        }
        while(tempB) {
            sizeB++;
            tempB = tempB->next;
        }
        
        tempA = headA;
        tempB = headB;
        
        int extraA = max(0, sizeA-sizeB), extraB = max(0, sizeB-sizeA);
        while(extraA--) {
            tempA = tempA->next;
        }        
        while(extraB--) {
            tempB = tempB->next;
        }
        while(tempA) {
            if(tempA == tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return nullptr;
    }
};