// Algorithm
// Check edge cases, if head or head's next is nullptr, return false
// Two pointers(Slow, Fast) - Both starting from the head
// Slow moves one step and Fast moves two steps
// If at any point, slow and fast meet, cycle exists, return true 
// If fast or next to fast becomes nullptr, return false


#include <iostream>
#include "ListNode.h"
using namespace std;

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(slow!=fast)
        {
            if(fast == nullptr || fast->next == nullptr)
            {
                return false;
            }
            
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return true;
    }
};

int main ()
{
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;
    
    Solution solution;
    cout << solution.hasCycle(head) << endl << endl;
    
    return 0;
}
