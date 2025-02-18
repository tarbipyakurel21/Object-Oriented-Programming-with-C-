//
//  main.cpp
//  Memory adress in C++
//
//  Created by Tarbi Pyakurel on 2/15/25.
//

#include <iostream>
void swap(std::string , std::string );

int main(){
    
  
    
    // memory adress is the adress of the variable in the computer
    // location in memory where data is stored
    // memory adress can be accessed with &(ampersand operator)
    
    std::string x="kool-aid";
    std::string y="water";
    
    swap(x,y);
    
    
    /*
     // put the same operations into a function called swap.
     std::string temp;
    temp=x;
    x=y;
    y=temp;
*/
    
    std::cout<<"X: "<<&x<<std::endl;
    std::cout<<"Y: "<<&y<<std::endl;
    
   /* std:: string name="Tarbi";
     int age=21;
     bool student=true;
    
    std:: cout<<&name<<std::endl;
    std:: cout<<&age<<std::endl;
    std:: cout<<&student<<std::endl;
    
    */
    return 0;
}

void swap(std::string x, std::string y){
    
    std::string temp;
    temp=x;
    x=y;
    y=temp;
    
std::cout<<"X:"<<&x<<std::endl;
std::cout<<"Y:"<<&y<<std::endl;
    
    
}

