/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 2017, 7:19 PM
   Purpose:  Mass and Weight
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
    float weight, mass;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout << " Enter the mass in kilograms ";
    cin >> mass;
    
    weight = mass * 9.8;
    
    //Display Output
    if (weight >= 1000)
    {    
        cout << weight << " It is too heavy!\n";
    }    
    else if (weight <= 10)
    {
        cout << weight << " It is too light.\n"; 
    }  
    else 
    {
        cout << weight << " newtons.\n";
    }    

    //Exit Program
    return 0;
}