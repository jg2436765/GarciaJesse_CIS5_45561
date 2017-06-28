/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on June 21, 2017, 5:50 PM
 * Purpose:  Triangle Pattern
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
    char f; 
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Triangle Pattern"<<endl;
    cin>>f;
    
    //Output the transformed data
    cout<<endl;
    cout<<"     "<<f<<endl;
    cout<<"    "<<f<<f<<f<<endl;
    cout<<"   "<<f<<f<<f<<f<<f<<endl;
    cout<<"  "<<f<<f<<f<<f<<f<<f<<f<<endl;

    //Exit stage right!
    return 0;
}

