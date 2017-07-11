/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 10, 2017, 6:49 PM
 * Purpose:  Temperature Calculation Table
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float TempF, TempC;//temperature in Fahrenheit and Celsius
    
    
    //Input or initialize values Here
    cout<<"We will show a table of Celsius to Fahrenheit. ";
    cout<<"conversion from 0 to 20. "<<endl;
    
    //Process/Calculations Here
    
    //Input to output
    
    for (TempC = 0; TempC <= 20; TempC++)
    {
        TempF = (9.0/5.0)*(TempC+32);//Formula for temperature in Fahrenheit
        cout<<"Celsius            Fahrenheit "<<endl;
    cout<<"  "<<TempC<<"                  "<<TempF<<endl;
    }
    //Exit
    return 0;
}

