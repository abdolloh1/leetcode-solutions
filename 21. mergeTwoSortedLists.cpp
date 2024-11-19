// Algorithm
// Create mergedList
// Create a current pointer
// Traverse through both lists and compare the values
// If one of lists have smaller value put it in current's next and increment the list
// Keep moving current to next until nodes of both lists are empty
// At end, put remaining nodes in the mergedList
// Return next of mergedList

#include <iostream>
#include "Header.h"

class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode mergedList;
        ListNode* curr = &mergedList;
        
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1 -> val < list2 -> val)
            {
                curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        
        if(list1 != nullptr)
        {
            curr->next = list1;
        }
        if(list2 != nullptr)
        {
            curr->next = list2;
        }
        
        return mergedList.next;
    }
};

