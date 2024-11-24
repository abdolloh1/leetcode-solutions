// Algorithm

// Make a stack class or "include <stack>"
// Initialize an empty Stack
// Iterate through the string
// If character is an opening bracket, Push it in the stack
// If character is a closing bracket, Check if stack's empty (Return false if it is)
// Otherwise, If Top element matches with this bracket, pop the element
// Otherwise, return false
// Finish processing all elements and check if stack's empty
// Return true if it is empty

// Algorithm 2
// Initialize n = length of the string
// Initialize stack = new char[n]
// Initialize top = -1
// For each character c in the string s
// If c is an opening bracket: increment top, stack[top] = c
// If c is a closing bracket:-
// If top == -1: free memory for stack and return false
// If stack[top] matches closing bracket: pop from stack
// Otherwise free memory for stack, return false
// After the loop, if top == -1, free memory for stack and return true
// Otherwise, free memory for stack and return false

#include <iostream>
using namespace std;

class Stack
{
private:
    char arr[1000];
    int topIndex;
    int capacity;

public:
    Stack(int size = 1000)
    {
        capacity = size;
        topIndex = -1;
    }

    void push(char x)
    {
        if (topIndex < capacity - 1)
        {
            arr[++topIndex] = x;
        }
        else
        {
            cout << "Stack Overflow!" << endl;
        }
    }

    void pop()
    {
        if (topIndex >= 0)
        {
            --topIndex;
        }
        else
        {
            cout << "Stack Underflow!" << endl;
        }
    }

    char top()
    {
        if (topIndex >= 0)
        {
            return arr[topIndex];
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return '\0';
        }
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }
};

class Solution {
public:
    bool isValid(string s)
    {
        Stack st;
        
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.isEmpty() ||
                    (c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '['))
                {
                    return false;
                }
                st.pop();
            }
        }

        return st.isEmpty();
    }
};

class Solution1
{
public:
    bool isValid(string s)
    {
        int n = s.length();
        char* stack = new char[n];
        int top = -1;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                stack[++top] = c;
            }
            else
            {
                if (top == -1)
                {
                    delete[] stack;
                    return false;
                }
                
                char topChar = stack[top];
                if ((c == ')' && topChar != '(') ||
                    (c == '}' && topChar != '{') ||
                    (c == ']' && topChar != '['))
                {
                    delete[] stack;
                    return false;
                }
                top--;
            }
        }

        bool isValid = (top == -1);
        delete[] stack;
        return isValid;
    }
};

int main ()
{
    Solution solution;
    Solution1 solution1;
    
    cout << "Using stack: " << endl;
    cout << "Input: ()        Output: " << solution.isValid("()") << endl;
    cout << "Input: ()[]{}    Output: " << solution.isValid("()[]{}") << endl;
    cout << "Input: (]        Output: " << solution.isValid("(]") << endl;
    cout << "Input: ([])      Output: " << solution.isValid("([])") << endl;
    
    cout << endl << endl;
    cout << "Using dynamically allocated stack array: " << endl;
    cout << "Input: ()        Output: " << solution1.isValid("()") << endl;
    cout << "Input: ()[]{}    Output: " << solution1.isValid("()[]{}") << endl;
    cout << "Input: (]        Output: " << solution1.isValid("(]") << endl;
    cout << "Input: ([])      Output: " << solution1.isValid("([])") << endl;
    
    
    return 0;
}
