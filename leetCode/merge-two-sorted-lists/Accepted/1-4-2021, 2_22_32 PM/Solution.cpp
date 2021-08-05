// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* ll0, ListNode* ll1) {
        if(ll0 == nullptr && ll1 == nullptr) return nullptr;

        int size = 0;
        vector<int> check;
        ListNode *t0 = ll0, *t1 = ll1;
        while(t0 && t1) {
            if(t0->val == t1->val) {
                check.push_back(t0->val);
                t0 = t0->next;
                // t1 = t1->next;
                size++;
            }
            else if(t1->val > t0->val) { 
                check.push_back(t0->val);
                t0 = t0->next;
                size++;
            }
            else {
                check.push_back(t1->val);
                t1 = t1->next;
                size++;
            }
            // for(auto i : check) cout << i << " " ; cout << endl;
        }
        if(t0 != nullptr) {
            while(t0) {
                check.push_back(t0->val);
                t0 = t0->next;
                size++;
            }
        }
        else {
            while(t1) {
                check.push_back(t1->val);
                t1 = t1->next;
                size++;
            }
        }

        ListNode* ans = new ListNode(check[0]);
        ListNode *temp = ans;
        for(int i = 1; i < size; i++) {
            ListNode *t = new ListNode(check[i]);
            temp->next = t;
            temp = temp->next;
        }
        return ans;
    }
};