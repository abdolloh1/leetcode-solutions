#include <iostream>
using namespace std;

struct ListNode
{
int val;
ListNode *next;
    
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* dummyHead = new ListNode();
    ListNode* current = dummyHead;
    
    int carry = 0;
    
    while (l1 != nullptr || l2 != nullptr || carry != 0)
    {
        int sum = carry;
        if (l1 != nullptr)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2 != nullptr)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
    }
    
    return dummyHead->next;
}

ListNode* createLinkedList(int arr[], int size) {
    ListNode* head = nullptr;
    ListNode* current = nullptr;
    for (int i = 0; i < size; ++i) {
        if (!head) {
            head = new ListNode(arr[i]);
            current = head;
        } else {
            current->next = new ListNode(arr[i]);
            current = current->next;
        }
    }
    return head;
}

void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};

    ListNode* l1 = createLinkedList(arr1, 3);
    ListNode* l2 = createLinkedList(arr2, 3);

    cout << "List 1: ";
    printLinkedList(l1);

    cout << "List 2: ";
    printLinkedList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Result: ";
    printLinkedList(result);

    return 0;
}
