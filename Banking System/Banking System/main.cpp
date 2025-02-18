//
//  main.cpp
//  Banking System
//
//  Created by Tarbi Pyakurel on 2/13/25.
//

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::setprecision;
using std::fixed;

void showBalance(double );
double deposit();
double withdraw(double);

int main(){
    double balance=0;
    int choice =0;
    
    do{ cout<<"***********************************"<<endl;
        cout<<"Enter your choice: "<<endl;
        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"***********************************"<<endl;
        
        cin>>choice;
        
        // TO clear invalid inputs
        
        cin.clear();
        fflush(stdin);
        
        switch (choice) {
            case 1:showBalance(balance);
                
                break;
            case 2:balance+=deposit();
                showBalance(balance);
                break;
            case 3:
                balance-=withdraw(balance);
                showBalance(balance);
                break;
            case 4: cout<<"Thanks for visiting"<<endl;
                cout<<"***********************************"<<endl;
                
                break;
                
            default:cout<<"Invalid Choice"<<endl;
                break;
        }}
  
    while(choice!=4);
    
    
    
    return 0;
}

void showBalance(double balance){
    cout<<"Your balance is "<<setprecision(2)<<fixed<<balance<<endl;
}

double deposit(){
    double money=0;
    cout<<"How much money you want to deposit: "<<endl;
    cin>>money;
    
    if (money>0){
        cout<<"You deposited $"<<money<<" into your account"<<endl;
        return money;}
    else{
        cout<<"That's not an valid amount"<<endl;
        return 0;
    }
    
}

double withdraw(double balance){
    double money;
    cout<<"How much money you want to withdraw: "<<endl;
    cin>>money;
    if (money<=balance){
        cout<<"You withdrew $"<<money<<" from your account"<<endl;
        return money;
    }
    
    else if(money<0){
        cout<<"That's not a valid amount"<<endl;
        return 0;
    }
    else{
        cout<<"You don't have enough balance in your accounts"<<endl;
        return 0;
    }
    
    
    
}
