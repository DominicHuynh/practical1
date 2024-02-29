#include<iostream>
extern int num_count(int array[], int n, int number);
int main (){
    int number= 2;
    int array[0]={};
    std::cout << "The count is : "<< num_count(array,2,2)<< std::endl;
    return 0;
}


