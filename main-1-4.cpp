#include<iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main (){
    int n=2;
    int array[2]={1,2};
    int secondarray[2]={1,2};
    std::cout<< "The sum of two arrays is : "<<sum_two_arrays(array,secondarray,2)<<std::endl;
    return 0;
}


