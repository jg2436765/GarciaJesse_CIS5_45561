
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 25, 2017, 6:58 PM
 * Purpose: Miles per gallon
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nGlns=15;//Number of gallons 
    float nMls=375;//Number of miles before refueling
    float MPG;//Miles per gallon
    
    //Input data values
    
    //Process the inputs
    MPG=nMls/nGlns;
    
    //Output the results
    cout<<" The number of miles per gallon ";
    cout<<"car gets.\n"<<MPG;
    
    //Exit stage right
    return 0;
}

