#include <cassert>
#include <iostream>
using namespace std;
bool isSorted(const int*arr,const int size) {
    if (size==1)return true;
    for (int i=1; i<size; i++) {
        if (arr[i-1]>arr[i])return false;
    }
    return true;
}
void testSortedArray(){
    int arr[]={1,2,3,4,5};
    bool result=isSorted(arr,5);
    assert(result==true);
}
void UnsortedArray(){
    int arr[]={4, 2, 3, 1, 5};
    bool result=isSorted(arr,5);
    assert(result==false);
}
void testDuplicateValues(){
    int arr[]={1,2,2,4,5};
    bool result=isSorted(arr,5);
    assert(result==true);
}
void SingleElement(){
    int arr[]={1};
    bool result=isSorted(arr,1);
    assert(result==true);
}
void testDescendingArray(){
    int arr[]={5, 4 , 3, 2, 1};
    bool result=isSorted(arr,5);
    assert(result==false);
}
void testNegativeValues(){
    int arr[]={-1, -2, -3, -4, -5};
    bool result=isSorted(arr,5);
    assert(result==false);
}
void testNegativeValuesAscending(){
    int arr[]={-5, -4, -3};
    bool result=isSorted(arr,3);
    assert(result==true);
}
int main() {
    testSortedArray();
    testDescendingArray();
    testSortedArray();
    testNegativeValuesAscending();
    SingleElement();
    UnsortedArray();
    testNegativeValues();
    return 0;
}