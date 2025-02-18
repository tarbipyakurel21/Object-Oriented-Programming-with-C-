//
//  main.cpp
//  FOR loops
//
//  Created by Tarbi Pyakurel on 2/11/25.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int rows;
    int columns;
    char symbol;
    
    cout<<"How many rows: "<<endl;
    cin>>rows;
    
    cout<<"How many columns: "<<endl;
    cin>>columns;
    
    cout<<"Using symbol: "<<endl;
    cin>>symbol;
    
    for (int i=1;i<=rows;i++){
        for(int j=1; j<=columns;j++){
            cout<<symbol;
        }
        cout<<endl;
            }
    
    
}
