// https://leetcode.com/problems/reverse-linked-list-ii

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr) return head;
        if(left == right) return head;
        vector<int> scam;
        ListNode* temp = head;
        while(temp) {
            scam.push_back(temp->val);
            temp = temp->next;
        }
        
        // cout << *(scam.begin()+left-1) << " " << *(scam.begin()+right) << endl;
        
        reverse(scam.begin()+left-1, scam.begin()+right);
        // for(auto i : scam) cout << i << " " ;
        temp = head;
        int i = 0;
        while(temp) {
            temp->val = scam[i++];
            temp = temp->next;
        }
        return head;
    }
};