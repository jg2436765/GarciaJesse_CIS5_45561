/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17, 2017, 5:00 PM
 * Purpose:  Measuring Kinetic Energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void kinEnrgy(float, float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float velocty;//velocity measured in meters / second
    float mass;//objects mass in kilograms (kg)
    float KE;//Kinetic Energy
    
    //Initialize variables
    cout<<"An object in motion has Kinetic Energy."<<endl;
    cout<<"Enter the Velocity (m/s) of a moving object: ";
    cin>>velocty;
    cout<<"Enter the mass (kg) of the moving object: ";
    cin>>mass;
    cout<<endl;
    
    //Call the Kinetic Energy function
    kinEnrgy(KE,velocty,mass);
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void kinEnrgy(float KE, float velocty, float mass){
   KE = (1.0/2.0)*(mass*pow(velocty,2));
   cout<<"The Kinetic Energy is = "<<KE<<endl;
}