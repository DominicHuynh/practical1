#include<iostream>

extern int array_sum(int array[], int n);
int main(){

    int array[0]={} ; 
    std::cout << "The total is : "<< array_sum(array,0)<< std::endl;
    return 0;
}