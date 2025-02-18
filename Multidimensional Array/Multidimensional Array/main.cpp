//
//  main.cpp
//  Multidimensional Array
//
//  Created by Tarbi Pyakurel on 2/15/25.
//

#include <iostream>
#include <iomanip>

int main(){
    
    
    std::string array[][3]={{"Mustang","Escape","F-150"},
        {"Corvette","Equinox","Silverado"},
        {"Challenger","Durango","Ram 150"}};
    
    
    // printing using size and nested loop
    int rows=sizeof(array)/sizeof(array[0]);
    int columns=sizeof(array[0])/sizeof(array[0][0]);
    
    for(int i=0; i<rows; i++){
        for (int j=0; j<columns;j++){
         std::cout<<array[i][j]<<" ";
            
        }
        std::cout<<std::endl;
    }
    
    // printing in traditional way
    
    /*
    std::cout<<array[0][0]<<" ";
    std::cout<<array[0][1]<<" ";
    std::cout<<array[0][2]<<" ";
    std::cout<<"\n";
    std::cout<<array[1][0]<<" ";
    std::cout<<array[1][1]<<" ";
    std::cout<<array[1][2]<<" ";
    std::cout<<"\n";
    std::cout<<array[2][0]<<" ";
    std::cout<<array[2][1]<<" ";
    std::cout<<array[2][2]<<" ";
     
     */
    
                    
    
    return 0;
}
