/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17, 2017, 7:33 PM
 * Purpose:  Random Coin Toss
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void coinToss(int,int,int,char);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int heads;
    int tails;
    int nThrows = 2;
    char coins;
    
    //Initialize variables
    cout<<"We are tossing two coins."<<endl;
    cout<<"If the first coin lands on heads then it equals to 1."<<endl;
    cout<<"If the second coin lands on tails then it equals to 2."<<endl;
    cout<<"Or vise versa."<<endl;
    cout<<endl;
    coinToss(heads,tails,nThrows,coins);   
    
    //Exit stage right!
    return 0;
}

void coinToss(int heads,int tails,int nThrows,char coins){
    for(int thrw=1;thrw<=nThrows;thrw++){
        coins=rand()%2+1;
        if(coins == 1){
            cout<<"Heads = 1 "<<endl;
        }else {
            cout<<"Tails = 2"<<endl;
        }
    }
}