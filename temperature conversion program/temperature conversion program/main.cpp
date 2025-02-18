//
//  main.cpp
//  temperature conversion program
//
//  Created by Tarbi Pyakurel on 2/11/25.
//

#include <iostream>


int main() {
    double temp;
    char unit;
    
    std::cout<<"***********Temperature Conversion***********\n";
    std::cout<<"F-Fahrenheit\n";
    std::cout<<"C-Celcius"<<std::endl;
    std::cout<<"Enter unit you want to convert to?\n";
    std::cin>>unit;
    if (unit=='F'||unit=='f'){
        std::cout<<"Enter the temp in celcius\n";
        std::cin>>temp;
        
        temp=(1.8*temp)+32.0;
        std::cout<<"Temperature is"<<temp<<"F\n";
    }
    
   else if (unit=='C'||unit=='c'){
        std::cout<<"Enter the temp in Fahrenheit\n";
        std::cin>>temp;
        
        temp=(temp-32)/1.8;
        std::cout<<"Temperature is"<<temp<<"C\n";
    }
   else{
       std::cout<<"Please enter in F or C\n";
   }
    std::cout<<"********************************************";
    
    
    
    return 0;
}
