//
//  main.cpp
//  Calculating hypotenuse project
//
//  Created by Tarbi Pyakurel on 2/11/25.
//

#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;


int main(){
    double a;
    double b;
    double c;
    
    cout<<"Enter side A "<<endl;
    cin>>a;
    cout<<"Enter side B "<<endl;
    cin>>b;
    
    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
    
    cout<<"SIde C: "<<c<<endl;
    
    
    return 0;
    
}
