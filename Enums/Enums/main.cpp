//
//  main.cpp
//  Enums
//
//  Created by Tarbi Pyakurel on 2/17/25.
//

#include <iostream>


enum Day{sunday=0,monday=1};

int main()
{
    
    // enums are user defined data types that consists of paired named-integer constants.
    // Great if you have a potential set of options.
    
    
 Day today=sunday;
    
    
    switch(today)
    {
            
            
        case sunday:
            std::cout<<"It is sunday \n";
            break;
        case monday:
            std::cout<<"It is Monday \n";
            break;
    }
    
    
    
    return 0;
}
