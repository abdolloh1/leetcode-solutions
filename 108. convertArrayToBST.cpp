#include <iostream>
#include "Header.h"
using namespace std;

class Solution
{
public:
    
    TreeNode* sortedArrayToBST(int array[], int size, int start, int end)
    {
        if(start>end)
        {
            return nullptr;
        }
        
        int mid = start+(end-start)/2;
        TreeNode* root = new TreeNode(array[mid]);
        
        root->left = sortedArrayToBST(array, size, start, mid-1);
        root->right = sortedArrayToBST(array, size, mid+1, end);
        
        return root;
    }
    
    void levelOrderTraversal(TreeNode* root)
       {
           if (!root)
           {
               return;
           }
        
           TreeNode* nodes[100];
           int front = 0;
           int back = 0;

           nodes[back++] = root;

           while (front < back)
           {
               TreeNode* current = nodes[front++];

               if (current)
               {
                   cout << current->val << " ";

                   nodes[back++] = current->left;
                   nodes[back++] = current->right;
               }
               else
               {
                   cout << "null ";
               }
           }
           cout << endl;
       }
};

int main ()
{
    Solution solution;
    const int size = 5;
    int array[size] = {-10,-3,0,5,9};
    
    TreeNode* root = solution.sortedArrayToBST(array, size, 0, size-1);
    solution.levelOrderTraversal(root);
    
    return 0;
}

