// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
    ListNode* swapNodes(ListNode* head, int k) {
        k--;
        ListNode* temp = head;
        if(temp == nullptr) return nullptr;
    
        vector<int> check;
        while(temp) {
            check.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        swap(check[k], check[check.size()-k-1]);
        ListNode* ans = head;
        for(auto i : check) {
            head->val = i;
            head = head->next;
        }
        return ans;
    }
};