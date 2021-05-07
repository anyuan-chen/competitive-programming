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
    ListNode* middleNode(ListNode* head) {
        int count = 1;
        ListNode* scout = head;
        while (scout->next){
            count++;
            scout = scout->next;
        }
        count /= 2;    
        while (count--){
            head = head->next;
        }
        return head;
    }
};