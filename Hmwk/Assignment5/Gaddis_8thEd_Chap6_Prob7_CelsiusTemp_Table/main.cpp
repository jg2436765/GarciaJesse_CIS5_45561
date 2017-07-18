/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 16, 2017, 11:34 PM
 * Purpose:  Celsius Temperature Table
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void celsius(float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float fahrnt;//Fahrenheit
    float cel;//Celsius
    
    //Initialize variables
    cout<<"Celsius Conversion Table"<<endl;
    cout<<endl;
    
    //Formula
    cel = (5.0/9.0)*(fahrnt-32);
    
    //Call the Celsius function
    cout<<"Fahrenheit      Celsius "<<endl;
    cout<<"------------------------"<<endl;
    celsius(fahrnt, cel);
    
    //Exit stage right!
    return 0;
}

void celsius(float fahrnt, float cel){
    for (fahrnt=0;fahrnt<=20;fahrnt++){
 
        //Formula
        cel = (5.0/9.0)*(fahrnt-32);
        cout<<"  "<<fahrnt<<"             "<<cel<<endl;
    }  
}