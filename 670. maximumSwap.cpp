#include <iostream>
using namespace std;

int maximumSwap(int num) {
    string s = to_string(num);  // Convert the number to a string to manipulate digits
    int n = s.size();           // Get the number of digits

    // Array to store the index of the largest digit seen so far from the right
    int rightMaxIndex = n - 1;
    int maxIndex = -1, leftIndex = -1, rightIndex = -1;

    // Traverse through the digits from right to left
    for (int i = n - 2; i >= 0; --i) {
        // If we find a digit larger than the current rightmost max digit, update the rightmost max
        if (s[i] < s[rightMaxIndex]) {
            leftIndex = i;
            rightIndex = rightMaxIndex;
        } else if (s[i] > s[rightMaxIndex]) {
            rightMaxIndex = i;
        }
    }

    // If we found a valid swap opportunity
    if (leftIndex != -1) {
        swap(s[leftIndex], s[rightIndex]);  // Swap the two digits
    }

    return stoi(s);  // Convert the string back to integer and return it
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int result = maximumSwap(num);
    cout << "Maximum number after swap: " << result << endl;

    return 0;
}
