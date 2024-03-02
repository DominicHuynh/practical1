#include<iostream>
extern bool is_fanarray(int array[], int n);
int main() {
    int arr[] = {1, 2, 3, 2, 1};



    std::cout <<  is_fanarray(arr, 5) << std::endl; 
   

    return 0;
}