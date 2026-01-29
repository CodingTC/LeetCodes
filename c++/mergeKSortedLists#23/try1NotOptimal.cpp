// This is not an optimal solution, pretty bad solution
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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        ListNode* dummy = new ListNode(-1);
        if(lists.size() <= 0)
        {
            return dummy->next;
        }
        
        ListNode* curOrig = lists[0];
        dummy->next = curOrig;
        
        for(int i = 1; i < lists.size(); i++)
        {
            curOrig = dummy->next;
            ListNode* curCur = lists[i];
           
            ListNode* mainPtr = dummy;
            while(curOrig || curCur)
            {
                if(!curCur || (curOrig && curOrig->val <= curCur->val))
                {
                    mainPtr->next = curOrig;
                    curOrig = curOrig->next;
                }
                else 
                {
                    mainPtr->next = curCur;
                    curCur = curCur->next;
                }
                mainPtr = mainPtr->next;
            }
            
        }

        return dummy->next;
    }
};

// Time: O(Nk)
// Space: O(1)
