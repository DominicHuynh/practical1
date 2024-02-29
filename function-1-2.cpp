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