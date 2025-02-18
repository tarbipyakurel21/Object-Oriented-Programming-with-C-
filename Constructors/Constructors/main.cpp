//
//  main.cpp
//  Constructors
//
//  Created by Tarbi Pyakurel on 2/17/25.
//

#include <iostream>



class Car{
    
    
public:
    std::string make;
    std::string model;
    int year;
    
    Car(std::string make, std::string model, int year){
        this->make=make;
        this->model=model;
        this->year=year;
    }
};



class Student{
    
public:
    std::string name;
    int age;
    double gpa;
    
    
    Student(std::string x, int y, double z){
        
        name=x;
        age=y;
        gpa=z;
        
        // do the following for same argument name
        //this->name=name;
        
        
        
        
    }
    
    
    
};



int main(){
    
    // constructors are special methods or functions that is automatically called when an object is instantiated and is useful for assigning values to attributes as arguments.
    
    
    Student student1("Spongebob",25,3.3);
    
    std::cout<<student1.name<<std::endl;
    std::cout<<student1.age<<std::endl;
    std::cout<<student1.gpa<<std::endl;
    
    
    Car car1("Chevy","Corvette",2022);
    std::cout<<car1.make<<std::endl;
    std::cout<<car1.model<<std::endl;
    std::cout<<car1.year<<std::endl;
    
    return 0;
}
