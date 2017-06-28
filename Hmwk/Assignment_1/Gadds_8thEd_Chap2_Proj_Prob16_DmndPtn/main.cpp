/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on June 21, 2017, 6:02 PM
 * Purpose:  Diamond Pattern
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
    char t; 
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Diamond Pattern"<<endl;
    cin>>t;
    
    //Output the transformed data
    cout<<endl;
    cout<<"     "<<t<<endl;
    cout<<"    "<<t<<t<<t<<endl;
    cout<<"   "<<t<<t<<t<<t<<t<<endl;
    cout<<"  "<<t<<t<<t<<t<<t<<t<<t<<endl;
    cout<<"   "<<t<<t<<t<<t<<t<<endl;
    cout<<"    "<<t<<t<<t<<endl;
    cout<<"     "<<t<<endl;

    //Exit stage right!
    return 0;
}

