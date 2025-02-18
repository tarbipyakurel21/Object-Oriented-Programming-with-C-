//
//  main.cpp
//  FIll () function
//
//  Created by Tarbi Pyakurel on 2/14/25.
//

#include <iostream>

int main(){
    
    //fill method
    // fill(begin,end,value);
    
    
    const int SIZE=99;
    
   //filling first third with pizza
    //filling second third with hamburgers
    //filling the last third with hotdog
    std::string foods[SIZE];
    fill(foods,foods+(SIZE/3),"pizza");
    fill(foods+(SIZE/3),foods+(SIZE/3)*2,"hamburgers");
    fill(foods+(SIZE/3)*2,foods +SIZE,"hotdogs");
    
    
    for (std::string food: foods){
        
        std::cout<<food<<std::endl;
        
    }
        
        
        
        return 0;
        
    }
