#include<iostream>
extern double array_mean(int array[], int n);
    

int main(){
    int array[0]={} ;
 
    std::cout << "The average is : "<< array_mean(array,0)<< std::endl;
    return 0;
}
