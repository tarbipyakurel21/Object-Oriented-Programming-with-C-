//
//  main.cpp
//  Accept user input into an array
//  in C++
//  Created by Tarbi Pyakurel on 2/15/25.
//

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main(){
    
    string foods[5];
    string temp;
    
    int size=sizeof(foods)/sizeof(foods[0]);
    
    for (int i=0; i<size;i++){
        
        cout<<"Enter a food you like or q to quit #"<<i+1<<": "<<endl;
        
        // store in a temporary variable and then assign to the array to nut include q in the array
        
        getline(cin,temp);
       if (temp=="q" || temp=="Q"){
            break;
        }
       else{
           foods[i]=temp;
       }
        }
    
    
    cout<<"You like the following foods: "<<endl;
    // display our elements until the array is not empty
    
    
    for (int j=0;!foods[j].empty();j++){
        
        cout<<foods[j]<<" ";
    }
    
    
    
    return 0;
}
