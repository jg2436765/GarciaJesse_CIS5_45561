
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 22, 2017, 8:40 AM
 * Purpose: Land Calculation
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants
const float CNVFTA=43560.0f;//43560 Feet/Acre

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float inSqFt, inAcres;//Input square Feet and Acres
    float nAcres;//Output the number in Acres
    
    //Input data values
    cout<<"Input # of Sq Feet, and Acres to convert"<<endl;
    cin>>inSqFt>>inAcres;
    
    //Process the outputs
    nAcres=inSqFt/43560.0f;
    
    //Output the results
    cout<<inSqFt<<" Feet = "<<nAcres<<" Acres "<<endl;
    
    //Exit stage right
    return 0;
}

