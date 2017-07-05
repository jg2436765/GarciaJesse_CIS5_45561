/* 
   File:   main
   Author: Jesse Garcia
   Created on July 1, 2017, 9:24 PM
   Purpose:  Minimum Maximum
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int num;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout<<" Enter a number and I will tell you if it ";
    cout<<"is a small number or a larger number. ";
    cin>>num;
    
    //Display Output
    if (num >= 100)
        cout<<num<<" is a large number";
    else
        cout<<num<<" is a small number";

    //Exit Program
    return 0;
}