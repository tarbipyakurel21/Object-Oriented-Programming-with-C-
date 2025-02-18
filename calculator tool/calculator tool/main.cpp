//
//  main.cpp
//  calculator tool
//
//  Created by Tarbi Pyakurel on 2/11/25.
//

#include <iostream>
using std:: cin;
using std:: cout;
using std:: endl;


int main() {
    char op;
    double num1;
    double num2;
    double results;
    
    cout<<"**********CALCULATOR**********"<<endl;
    cout<<"Enter the operation you want to perform(+ - * /):  "<<endl;
    cin>>op;
    
    cout<<"Enter number 1: "<<endl;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
    
    switch(op){
        case '+':results=num1+num2;
            break;
        case '-':
            results=num1-num2;
            break;
        case'*':
            results=num1*num2;
            break;
        case'/':
            results=num1/num2;
            break;
        default:
            results=0;
            cout<<"Enter a valid expression: "<<endl;
            
            
    }
    
    cout<<results<<endl;
    
    
    
    cout<<"******************************"<<endl;
    
    return 0;
    
}
