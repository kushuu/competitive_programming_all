// https://leetcode.com/problems/add-two-numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {        
        vector<int> check;
        int carry = 0;
        ListNode *temp1 = l1, *temp2 = l2, *ans = new ListNode();
        while(temp1 && temp2) {
            int to_be_pushed = temp1->val + temp2->val + carry;
            check.push_back(to_be_pushed%10);
            carry = to_be_pushed/10;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1) {
            int to_be_pushed = temp1->val + carry;
            check.push_back(to_be_pushed%10);
            carry = to_be_pushed/10;
            temp1 = temp1->next;
        }
        while(temp2) {
            int to_be_pushed = temp2->val + carry;
            check.push_back(to_be_pushed%10);
            carry = to_be_pushed/10;
            temp2 = temp2->next;
        }
        if(carry) check.push_back(carry);

        for(auto i : check) cout << i << " " ;
        
        ListNode * temp = ans;
        for(auto i : check) {
            ListNode *t = new ListNode(i);
            temp->next = t;
            temp = temp->next;
        }
        ans = ans->next;
        return ans;
    }
};