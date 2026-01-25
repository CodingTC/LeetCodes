// This solution is slightly inoptimal
// Time O(Max(M,N)) Space O(1) is possible

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        ListNode* sumHead = new ListNode();
        sumHead->val = (l1->val + l2->val) % 10;
        if(l1->val + l2->val >= 10)
        {
            carry = 1;
        }

        l1 = l1->next;
        l2 = l2->next;
        ListNode* prev = sumHead;
        while(l1 && l2)
        {
            ListNode* cur = new ListNode();
            prev->next = cur;
            cur->val = (l1->val + l2->val + carry) % 10;
            if(l1->val + l2->val + carry >= 10)
            {
                carry = 1;
            }
            else 
            {
                carry = 0; 
            }
            l1 = l1->next;
            l2 = l2->next;
            prev = prev->next;
        }
        if(!l1 && !l2)
        {
            if(carry == 1)
            {   
                ListNode* cur = new ListNode();
                prev->next = cur;
                cur->val = carry % 10;
            }
            return sumHead;
        }
        else if(!l1)
        {
            while(l2)
            {
                ListNode* cur = new ListNode();
                prev->next = cur;
                cur->val = (0 + l2->val + carry) % 10;
                if(0 + l2->val + carry >= 10)
                {
                    carry = 1;
                }
                else 
                {
                    carry = 0; 
                }
                l2 = l2->next;
                prev = prev->next;
            }   
        }
        else if(!l2)
        {
            while(l1)
            {
                ListNode* cur = new ListNode();
                prev->next = cur;
                cur->val = (0 + l1->val + carry) % 10;
                if(0 + l1->val + carry >= 10)
                {
                    carry = 1;
                }
                else 
                {
                    carry = 0; 
                }
                l1 = l1->next;
                prev = prev->next;
            }   
        }
        if(carry == 1)
        {   
            ListNode* cur = new ListNode();
            prev->next = cur;
            cur->val = carry % 10;
        }
        return sumHead;
    }
};

// Time O(Max(M,N)) 
// Space O(Max(M,N))
