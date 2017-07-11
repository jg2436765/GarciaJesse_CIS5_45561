/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 9, 2017, 7:47 PM
 * Purpose:  Using loops to sum a group of numbers
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int sum=0;
    int numbers;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"Enter positive numbers ";
    cout<<"only. At the end of the program, it will add all";
    cout<<" of the integers. "<<endl;
    
    
    //Output the transformed data
    do 
    {
        cout<<"Input numbers [Enter 0 to terminate program] ";
        cin>>numbers;
        sum+=numbers;
        
    }while(numbers>=1 && numbers <=100);
        cout<<"The sum of numbers is "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

