#include<iostream>
double array_mean(int array[], int n){
    

    int total=0;
    if(n<1){
        return 0.0;
    }
    else{
        for(int i=0;i<n;i++){
        total=total+array[i];
        }
    }
    double avg=double (total*1.0/n);



    return avg;
}
int main(){
    int array[5]={1,2,3,4,9} ;
 
    std::cout << "The average is : "<< array_mean(array,5)<< std::endl;
    return 0;
}
