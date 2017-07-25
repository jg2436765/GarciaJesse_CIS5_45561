/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 24, 2017, 8:16 PM
 * Purpose:  Charge Account Validation
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
const int SIZE=18;
int srchlst(int ,int [SIZE]);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int account[SIZE]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                       8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                       1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int num;
    bool found=true;
    //Initialize variables
    cout<<"Enter the number you are looking for: ";
    cin>>num;
    
    if(found==srchlst(num,account))
        cout<<"Account "<<num<<" is a valid account. Congratulations! "<<endl;
    else 
        cout<<"Account "<<num<<" is not a valid account. "<<endl;
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

int srchlst( int num,int look[SIZE]){
    for (int i=0; i<SIZE; i++){
        if(num == look[i])
            return true;
    }
    return false;
}