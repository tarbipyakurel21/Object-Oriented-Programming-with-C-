//
//  main.cpp
//  Bubble sort algorithm
//
//  Created by Tarbi Pyakurel on 2/14/25.
//

#include <iostream>
using std::cout;
using std::endl;

void sortArray(int[], int);

int main(){
    
    int array[]={1,86,9,6,9,68,9,0};
    int size = sizeof(array)/sizeof(array[0]);
    
    sortArray(array,size);
    
    for (int i=0;i<size;i++){
        cout<<array[i]<<endl;
        
    }
    
    return 0;
    
}

void sortArray(int array[],int size){
    
    int temporary;
    
    for (int i=0;i<size-1;i++){
        for (int j=0; j<size-i-1;j++){
            if (array[j]>array[j+1]) {
                temporary=array[j];
                array[j]=array[j+1];
                array[j+1]=temporary;
                
            }
            
        }
    }
}
