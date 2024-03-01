#include<iostream>
bool is_ascending(int array[], int n){
    if (n<=0){
        return false;
    
    }
    else{
        for(int i=0;i<n;i++){
            if(array[i]<=array[i+1]){
                return true;
            }

        }
    }

return true;



}