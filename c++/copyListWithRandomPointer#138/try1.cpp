// This is not the optimal solution
// Time O(n) Space O(1) is possible
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(!head)
        {
            return nullptr;
        }
        unordered_map<Node*, Node*>  pointerMap;

        Node* curr = head;
        Node* copyHead = nullptr;
        while(curr)
        {
            Node* aNode = new Node(curr->val);
            pointerMap[curr] = aNode;
            if(head && head == curr)
            {
                copyHead = aNode;
            }
            curr = curr->next;
        }
        curr = head;
        Node* newCurr = copyHead;
        while(newCurr && curr)
        {
            newCurr->next = pointerMap[curr->next];
            newCurr->random = pointerMap[curr->random];

            newCurr = newCurr->next;
            curr = curr->next;
        }

        return copyHead;
    }
};

// Time: O(N)
// Space: O(N)
