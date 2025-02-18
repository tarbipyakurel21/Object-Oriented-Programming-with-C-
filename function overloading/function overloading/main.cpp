//
//  main.cpp
//  function overloading
//
//  Created by Tarbi Pyakurel on 2/12/25.
//

#include <iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int myNum=3;//Global variable

void bakePizza();
void bakePizza(string);
void bakePizza(string,string);

int main(){
    
    bakePizza();
    bakePizza("Pepporoni");
    bakePizza("Pepporoni","Mushroom");
    
    int myNum=4;
    
    cout<<::myNum<<endl; //Printing global variable.
    cout<<myNum<<endl; //Printing local variable.
    return 0;
    
}

void bakePizza(){
    cout<<"Here is your Pizza"<<endl;
}

void bakePizza(string topping1){
    cout<<"Here is your Pizza with "<<topping1<<endl;
    
}
void bakePizza(string topping1,string topping2){
    cout<<"Here is your Pizza with "<<topping1<<" and "<<topping2<<endl;
    
}

