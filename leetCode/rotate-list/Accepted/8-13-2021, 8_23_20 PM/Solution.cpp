// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 0;
        if(head == nullptr) return head;
        if(!k) return head;
        if(head->next == nullptr) return head;
        
        // this is the good, expected solution
        ListNode *temp = head;
        while(temp) {
            size++;
            temp = temp->next;
        }
        
        
        k %= size;
        if(!k) return head;
        
        ListNode *front = head, *back = head;
        ListNode *follow = back;
        while(k-- > 1) front = front->next;
        while(front->next) { 
            front = front->next; 
            follow = back;
            back = back->next;
        }
        follow->next = nullptr;
        front->next = head;
        return back;
        
        // this is the nalayak approach.
        // vector<int> check;
        // ListNode *temp = head;
        // while(temp) {
        //     check.push_back(temp->val);
        //     temp = temp->next;
        // }
        // k %= check.size();
        // rotate(check.begin(), check.begin()+check.size()-k, check.end());
        // temp = head;
        // int i = 0;
        // while(temp) {
        //     temp->val = check[i++];
        //     temp = temp->next;
        // }
        // return head;
    }
};