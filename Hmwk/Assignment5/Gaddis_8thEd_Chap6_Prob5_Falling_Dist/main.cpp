/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 16, 2017, 11:34 PM
 * Purpose:  Falling Distance
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void fllngDst(float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float distnce;//measured in meters
    float time;//measured in seconds from [0,10]
    float g=9.8;//gravity force
    
    //Initialize variables
    cout<<"The falling distance of an object is measured"
            " in distance and time."<<endl;
    cout<<"Display the Distance from 0 to 10 seconds."<<endl;
    cout<<endl;
    
    //Call the fllngDst function
    fllngDst(distnce, time);
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void fllngDst(float distnce, float time){
    float g=9.8;
    for (time=0;time<=10;time++){
    distnce = (1.0/2.0)*(g*pow(time,2)); 
    cout<<"The Distance traveled is "<<distnce<<" m/s"<<endl;
    }  
}