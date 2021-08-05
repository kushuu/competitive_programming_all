// https://leetcode.com/problems/merge-k-sorted-lists

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> everything;
        for(auto i : lists) {
            ListNode* temp = i;
            while(temp) {
                everything.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(begin(everything), end(everything));
        // for(auto i : everything) cout << i << " " ;
        
        ListNode *ans = new ListNode();
        ListNode* temp = ans;
        for(auto i : everything) {
            ListNode* t = new ListNode(i);
            temp->next = t;
            temp = temp->next;
        }
        ans = ans->next;
        return ans;
    }
};