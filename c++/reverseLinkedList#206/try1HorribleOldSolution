//this solution is really bad, I did it when I just started

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
    ListNode* reverseList(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* curNode = new ListNode();
        curNode = head->next;
        head->next = nullptr;

        ListNode* newTail = new ListNode(head->val, head->next);

        while(!(curNode == nullptr) && curNode->next != nullptr)
        {
            ListNode* prev = new ListNode();
            prev = head;
            head = curNode;
            curNode = curNode->next;
            head->next = prev;
            prev = head;
        }  

        ListNode* prev = new ListNode();
        prev = head;
        head = curNode;
        head->next = prev;


        return head;
    }
};

// Time: O(n)
// Space: O(1)
