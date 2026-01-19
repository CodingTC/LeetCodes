// this is a poor old solution from when I first started

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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* curr = head;
        int count = 0;
        while(curr)
        {
            count++;
            curr = curr->next;
        }   
        int mid = (count/2) + 1;

        int newCount = 1;
        ListNode* newCurr = head;
        while(newCount < mid)
        {
            newCount++;
            newCurr = newCurr->next;
        }
        return newCurr;
    }
};
