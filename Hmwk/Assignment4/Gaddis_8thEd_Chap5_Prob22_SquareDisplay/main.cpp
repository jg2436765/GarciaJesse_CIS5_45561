/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 10, 2017, 11:47 AM
 * Purpose:  Square Display
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
    int number;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"Enter a positive integer but no greater than 15: ";
    cin>>number;
    
    
    //Output the transformed data
    if (number <1)
        number =1;
    else if (number >15)
        number =15;
    for (int c=0; c<number; c++){
        for (int y=0; y<number; y++)
        {
            cout<<'X';
        }cout<<endl;
    }
        
    
    //Exit stage right!
    return 0;
}

