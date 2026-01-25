// This is a suboptimal solution
// A Time of O(n) Space O(1) is possible
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        unordered_map<ListNode*, int> seenAddresses;
        while(head)
        {
            if(seenAddresses.count(head))
            {
                return true;
            }

            seenAddresses[head]++;
            head = head->next;
        }   

        return false;
    }
};

// Time: O(n)
// Space: O(n)
