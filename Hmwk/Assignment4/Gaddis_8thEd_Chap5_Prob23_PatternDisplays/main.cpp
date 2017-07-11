/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 10, 2017, 11:59 AM
 * Purpose:  Pattern Display
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
    
    //first triangle
    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout<< "+";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //second triangle
    for (int r = 10; r > 0; r--)
    {
        for (int c = 0; c < r; c++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

