#include <iostream>
using namespace std;
void analyze_pointer (int* ptr) {
    cout<< ptr<<endl;
    cout<< *ptr<<endl;
}

int main() {
    // Stack allocation
    int a = 9;
    cout<< "Stack Allocation"<<endl;
    analyze_pointer(&a);
    // Heap Allocation
    int *n = new int;
    *n = 2;
    cout<< "Heap Allocation"<<endl;
    analyze_pointer(n);
    return 0;
}