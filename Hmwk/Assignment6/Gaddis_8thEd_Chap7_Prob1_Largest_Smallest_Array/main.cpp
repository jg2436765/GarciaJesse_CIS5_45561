/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 24, 2017, 7:32 AM
 * Purpose:  Largest and Smallest Array
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num[10];
    int smallst;
    int largest;
    int count;
   
    //Initialize variables
    for (int i=0;i<10;i++){
        cout<<"Please enter numbers "<<i+1<<": "<<endl;
        cin>>num[i];
    }
    
    smallst=num[0];
    largest=num[0];
    
    //Initialize the variables
    for(int i=1;i<10;i++){
        count=num[i];
        if(count<smallst)
            smallst=count;
        if(count>largest)
            largest=count;
    }
    
    //Output the transformed data
    cout<<"The Largest number is: "<<largest<<endl;
    cout<<"The Smallest number is: "<<smallst<<endl;
    
    //Exit stage right!
    return 0;
}