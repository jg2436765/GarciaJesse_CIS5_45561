
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 28, 2017, 1:19 PM
 * Purpose: Miles per gallon 
 * 
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
    float gal,MPG,MlsDrvn;
    
    //Input data values
    cout<<"Enter the amount of gas your car can hold: ";
    cin>>gal; 
    cout<<"How many miles can your car be driven on a ";
    cout<<"full tank?";
    cin>>MlsDrvn;
    
    //Process the inputs
    MPG=MlsDrvn/gal;
    
    //Output the results
    cout<<"Your car can be driven an estimated: "<<MPG<<endl;
    
    
    //Exit stage right
    return 0;
}

