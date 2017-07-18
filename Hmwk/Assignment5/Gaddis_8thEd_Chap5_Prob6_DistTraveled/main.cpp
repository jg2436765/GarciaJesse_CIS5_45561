/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 10, 2017, 10:51 AM
 * Purpose:  Distance Traveled
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int speed;//in mph
    int time;//in hours
    int dist;//distance = (speed * time)
    
    //Input or initialize values Here
    cout<<"This program will help you determine the distance";
    cout<<" traveled."<<endl;
    cout<<"what is the speed of the vehicle in mph? ";
    cin>>speed;
    
    //Process/Calculations Here
    while (speed <= 0){
        cout<<"Enter a positive number for speed: ";
        cin>>speed;
    }
    
    cout<<"How many hours were traveled? ";
    cin>>time;
    
    while (time <1){
        cout<<"Enter a number greater than 1 for hours: ";
        cin>>time;
    }
    
    dist = speed * time;
    
    cout<<"Hour "<<"   "<<"Distance Traveled "<<endl;
    
    for (time =1; time <= 8; time++)
    {
     cout<<" "<<time<<"             "<<speed*time<<endl;   
        
    }
    
    //Output Located Here
    
    //Exit
    return 0;
}

