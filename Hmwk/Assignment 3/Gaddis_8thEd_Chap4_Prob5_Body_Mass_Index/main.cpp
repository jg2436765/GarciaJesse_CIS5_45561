/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 2017, 6:29 PM
   Purpose: Body Mass Index
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int BMI;
    
    //Input values
    int weight = 0.0;
    int height = 0.0;
    
    //Process values -> Map inputs to Outputs
    cout<<" Enter your body weight (lbs) ";
    cin>>weight;
    cout<<" Enter your height (in)";
    cin>>height;
    
    BMI = (weight * 703) / pow(height,2);
    
    //Display Output
    if (BMI >= 18.5 && BMI <= 25)
    {    
        cout << BMI << " Your body is in optimal conditions.\n "; 
    }    
    else if (BMI < 18.5)
    {    
        cout << BMI <<" You are underweight.\n";
    }    
    else
    {
        cout <<" You are overweight.\n"; 
    }    

    //Exit Program
    return 0;
}