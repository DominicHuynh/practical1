#include <iostream>
int array_sum(int array[], int n)
{
    int total =0;
        for (int i=0; i<n;i++){
            if(n>1){
                total=total+array[i];
        }
        else{
            total =0;
        }
        }
return total;

}