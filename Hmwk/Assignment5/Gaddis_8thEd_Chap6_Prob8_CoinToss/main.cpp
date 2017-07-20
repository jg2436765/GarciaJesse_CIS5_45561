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
    int nThrows = 1;
    char coin;
    
    //Initialize variables
    cout<<"We are tossing one coin."<<endl;
    cout<<"If the coin lands on heads then it equals 1."<<endl;
    cout<<"If the coin lands on tails then it equals 2."<<endl;
    cout<<endl;
    coinToss(heads,tails,nThrows,coin);   
    
    //Exit stage right!
    return 0;
}

void coinToss(int heads,int tails,int nThrows,char coin){
    for(int thrw=1;thrw<=nThrows;thrw++){
        coin=rand()%2+1;
        if(coin == 1){
            cout<<"Heads = 1 "<<endl;
        }else {
            cout<<"Tails = 2"<<endl;
        }
    }
}