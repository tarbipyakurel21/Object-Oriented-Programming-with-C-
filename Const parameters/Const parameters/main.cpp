//
//  main.cpp
//  Const parameters
//
//  Created by Tarbi Pyakurel on 2/15/25.
//

#include <iostream>

void printInfo(const std::string &, const int &);

int main(){
    // const parameter- parameter that is effectively read-only.
    // code is more secure and conveys intent that is useful for pointers and references.
    
    std::string name="Tarbi";
    int age=21;
    
    printInfo(name,age);
    
    return 0;
    
}

void printInfo(const std::string &name,const int &age){
    
    // cannot assign const variable name="tarbi";
    
    std::cout<<name<<std::endl;
    
    std::cout<<age<<std::endl;
    
    
    
    
}
