// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* temp = head;
        unordered_map<int, int> check;
        while(temp) {
            check[temp->val]++;
            temp = temp->next;
        }
        
        bool yes = false;
        for(auto i : check) 
            if(i.second == 1) {
                yes = true; 
                break;
            }
        if(!yes) return nullptr;
        
        temp = head;
        
        ListNode *ans, *temp1 = head;
        ans = temp1;
        // temp1 = ans;
        // while(temp) {
        //     cout << temp->val << " " << check[temp->val] << endl;
        //     if(check[temp->val] == 1) {
        //         ListNode *t = new ListNode(temp->val);
        //         temp1->next = t;
        //         temp1 = temp1->next;
        //     }
        //     cout << "here\n";
        //     temp = temp->next;
        // }
        
        while(temp) {
            if(temp->next) {
                while(check[temp->next->val] > 1) {
                    temp->next = temp->next->next;
                }
            }
            else {
                if(check[temp->next->val] > 1) temp = temp->next;
            }
            temp = temp->next;
        }
        if(check[ans->val] > 1) ans = ans->next;
        return ans;
    }
};