
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 29, 2017, 8:50 PM
 * Purpose: How Many Calories?
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cmath>
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float totcal;//calories
    float ckies;//cookies
    
    //Input data values
    cout<<"Enter the amount of cookies you ate: ";
    cin>>ckies;
    
    //Process the inputs
    totcal = ckies * 100;
    
    //Output the results
    cout<<"You consumed this many calories: "<<totcal<<endl;
    
    //Exit stage right
    return 0;
}

