
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 19, 2017, 1:22 PM
 * Purpose: Sum of 2 Numbers

 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char num1,num2;// 1 Byte data type range [0, 255]
    unsigned char sum;      //1 Byte data type range [0,255]
    
    //Initialize variables
    num1=50;
    num2=100;
    
    
    //Map inputs to outputs or the process the data
    sum=num1+num2;
    
    //Output the transformed data
    cout<<num1<<"+"<<num2<<"="<<sum<<endl;
    cout<<static_cast<int>(num1)<<"+"
        <<static_cast<int>(num2)<<"="
        <<static_cast<int>(sum)<<endl;    
            
    
    //Exit stage right
    return 0;
}

