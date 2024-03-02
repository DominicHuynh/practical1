#include<iostream>
extern bool is_fanarray(int array[], int n);
int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {2, 4, 4, 2};
    int arr3[] = {1, 2, 1, 2, 1};
    int arr4[] = {1, 3, 5, 4, 2};

    std::cout << std::boolalpha; 
    std::cout << "arr1 is a fan array: " << is_fanarray(arr1, 5) << std::endl; 
    std::cout << "arr2 is a fan array: " << is_fanarray(arr2, 4) << std::endl; 
    std::cout << "arr3 is a fan array: " << is_fanarray(arr3, 5) << std::endl; 
    std::cout << "arr4 is a fan array: " << is_fanarray(arr4, 5) << std::endl; 

    return 0;
}