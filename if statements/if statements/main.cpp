//  main.cpp
//  if statements and switch
//  Created by Tarbi Pyakurel on 2/11/25.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    // && both of them are true
    // || one of them is true
    // ! reverses the logical operater
    
    int temp;
    temp=-1;
    if (temp>0 && temp<30){
        cout<<"The temp is good"<<endl;
        }
    else{
        cout<<"The temp is bad"<<endl;
    }
    
    if (temp<=0 || temp>=30){
        cout<<"The temp is BAD"<<endl;
        }
   
    bool sunny=true;
    if (sunny){
        cout<<"It is sunny outside"<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*int age;
    cout<<"enter age? "<<endl;
    cin>>age;
    
    if (age>=21){
        cout<<"You are old enough to enter"<<endl;}
        
        else if(age<21){
            cout<<"You are not allowed to enter"<<endl;
            
        }
        
        else {
            cout<<"Invalid input"<<endl;
        }
        
    int month;
    
    cout<<"Enter month (1-3)"<<endl;
    cin>>month;
    
    switch(month){
            
        case 1:
            cout<<"January"<<endl;
            break;
        case 2:
            cout<<"February"<<endl;
            break;
        case 3:
            cout<<"March"<<endl;
        default:
            cout<<"Enter valid numbers"<<endl;
            
    }
    
    int grade=70;
    
    grade>=60? cout<<"YOU passed!"<<endl : cout<<"You fail"<<endl;
        
    grade<=90?cout<<"You have less than 90 "<<endl:cout<<"You have more than 90";
    
    bool hungry=true;
    
    hungry? cout<<"You are hungry":cout<<"You are full";
     
     */
    
return 0;
    
}
