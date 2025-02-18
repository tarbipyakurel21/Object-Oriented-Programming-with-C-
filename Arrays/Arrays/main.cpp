//
//  main.cpp
//  Arrays
//
//  Created by Tarbi Pyakurel on 2/13/25.
//

#include <iostream>
using std:: string;
using std::cout;
using std::cin;
using std::endl;

//array
// size of() function is useful when working with arrays.
// When you pass an array to another function it decays into pointer

/*
 double getTotal(double prices[],double size){
    double Total =0;
   
    for (int i=0;i<size;i++){
        
        Total+=prices[i];
        
    }
   
    
    
return Total;}
*/

// searching an element in the array

int indexof(int num[],int size, int elem){
    
    for (int i=0;i<size;i++){
        
        if (num[i]==elem){
            
            return i;
        }
    }
    return -1;
}


            
    int main() {
        int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        int size = sizeof(numbers) / sizeof(numbers[0]);
        int element;
        
        cout << "Enter the value to search: ";
        cin >> element;
        
        int index = indexof(numbers, size, element);
        if (index != -1) {
            cout << "The value is at index " << index << endl;
        } else {
            cout << "The value " << element << " is not in the array." << endl;
        }
        
        return 0;
    }

        
        
        
        
        
        
        
        
        
        
        /* double prices[]={99.0,99,15.5};
         double size=sizeof(prices)/sizeof(double);
         double total= getTotal(prices,size);
         
         cout<<"$"<<total<<endl;
         */
        /*string cars[3];
         
         cars[0]="Tarbi";
         cars[1]="bhai";
         cars[2]="k xa";
         
         // for loop
         for (int i =0;i<sizeof(cars)/sizeof(string);i++){
         cout<<cars[i]<<endl;
         }
         //for each loop for arrays.
         
         string students[]={"Tarbi","raman","Pyakurel"};
         for (string student : students){
         cout<<student<<endl;
         }
         
         double gpa=2.5;
         cout<<sizeof(gpa)<<endl;
         cout<<sizeof(string)<<endl;
         cout<<sizeof(cars)/sizeof(string)<<" elements"<<endl;
         
         cout<<cars[0]<<endl;;*/
        
        
        
      
