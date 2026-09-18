#include <iostream>
using namespace std;
// Function to reverse the string
// This function takes the address of string and then reverses the string
void reverse(string* s) {
    // Taking the size of the string
    int n = s->size();
    // Making 2 pointers to reverse the string
    int left = 0, right = n-1;
    while (left<right) {
        // Taking temp char so that we can keep the original value of left char
        char temp = (*s)[left];
        // Replacing the left char with right one
        (*s)[left] = (*s)[right];
        // Replacing the right character with left original value
        (*s)[right] = temp;
        // increasing left and reducing right
        left++; right--;
    }
}
int main() {
    string *s = new string;
    // Taking input from the user
    cout<<"Enter the string: "<<endl;
    cin>> *s;
    // Passing the address to reverse function
    reverse(s);
    // Printing the reversed string
    cout<<"Reversed String: "<<*s<<endl;
    // Freeing the memory
    delete s;
    return 0;
}