// This is close to the optimal solution

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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int size = 0;
        ListNode* curr = head; 
        while(curr)
        {
            size++;
            curr = curr->next;
        }    
        if(size == 1)
        {
            return nullptr;
        }
        if(n == size)
        {
            ListNode* afterHead = head->next;
            head->next = nullptr;
            return afterHead;
        }
        
        int indexToRemove = size - n;
        curr = head;
        ListNode* prev = curr;
        for(int i = indexToRemove; i > 0; i--)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = nullptr;

        return head;
    }
};

// Time: O(n)
// Space: O(1)
