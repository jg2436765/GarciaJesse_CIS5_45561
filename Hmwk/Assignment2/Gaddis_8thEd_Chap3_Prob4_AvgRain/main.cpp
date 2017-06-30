
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 29, 2017, 8:37 AM
 * Purpose: Average Rainfall
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>
#include <cmath>
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    char Mnth1[SIZE],Mnth2[SIZE],Mnth3[SIZE];
    float avgRnfll,rainfall;
    float totRnfll;
    
    
    //Input data values
    cout<<"Enter three consecutive months: "<<endl;
    cin>>Mnth1>>Mnth2>>Mnth3;
    
    cout<<"How many inches of rain fell in "<<Mnth1<<"?"<<endl;
    cin>>rainfall;
    totRnfll += rainfall;//totRnfll = totRnfll + rainfall
    
    cout<<"How many inches of rain fell in "<<Mnth2<<"?"<<endl;
    cin>>rainfall;
    totRnfll += rainfall;//totRnfll = totRnfll + rainfall
    
    cout<<"How many inches of rain fell in "<<Mnth3<<"?"<<endl;
    cin>>rainfall;
    totRnfll += rainfall;//totRnfll = totRnfll + rainfall
    
    //Process the inputs
    avgRnfll = totRnfll/3.0; 
    
    //Output the results
    cout<<"The average rainfall for "<<Mnth1<<","<<Mnth2<<","<<Mnth3<<" is ";
    cout<<setprecision(2)<<avgRnfll<<endl;
    //Exit stage right
    return 0;
}

