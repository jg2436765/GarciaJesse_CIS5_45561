/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17, 2017, 8:10 PM
 * Purpose:  Present Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float presVal(float,float,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float F = 0;//Future Value
    float r = 0;//Interest Rate
    int n = 0;//Number of Years
    float P = 0;
    
    //Initialize variables
    cout<<"Enter the amount of money you are trying to save: $";
    cin>>F;
    cout<<"Enter the interest rate: ";
    cin>>r;
    cout<<"Enter the number of years you want to be saving: ";
    cin>>n;
    
    //Calculations
    P = presVal(F,r,n);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"In order to save $"<<F<<" you need to deposit $"<<P<<endl;
    
    //Exit stage right!
    return 0;
}

float presVal(float F,float r,int n){
    float P;
    P = F / (pow(1 + (r*0.01),n));
    
    return P;
    
}