/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on June 27, 2017, 1:49 PM
 * Purpose:  Temperature Calculations
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float TempF, TempC;
    
    //Input or initialize values Here
    cout<<"Input the temperature in Fahrenheit "<<endl;
    cin>>TempF;
    
    //Process/Calculations Here
    TempC=(5.0f/9.0f)*(TempF-32);
    
    //Output Located Here
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The temperature in Celsius is = "<<TempC<<endl;

    //Exit
    return 0;
}

