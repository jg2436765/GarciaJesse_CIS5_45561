/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17th, 2017, 12:15 PM
 * Purpose:  DMV Scoring
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random function
#include <ctime>     //Time function
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(char [],int);
void fillAry(char [],char [],int,int);
void prntAry(char [],int);
char scorAry(char [],char [],char [],int);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=40;
    char pass=0.75f*SIZE;
    char key[SIZE],answer[SIZE],cw[SIZE];
    char percent=60;//Bias the answers, realize starts with 25%
    
    //Initialize variables
    fillAry(key,SIZE);
    fillAry(key,answer,SIZE,percent);
    
    //Map inputs to outputs or process the data
    char score=scorAry(key,answer,cw,SIZE);
    
    //Output the transformed data
    prntAry(key,SIZE);
    prntAry(answer,SIZE);
    prntAry(cw,SIZE);
    cout<<endl<<"You received a score of "<<static_cast<int>(score)
            <<"/"<<SIZE<<((score>=pass)?" Pass":" Fail")<<endl;
    
    //Exit stage right!
    return 0;
}

void fillAry(char key[],char ans[],int n,int percent){
    for(int i=0;i<n;i++){
        if((rand()%100+1)<=percent){
            ans[i]=key[i];
        }else{
            ans[i]=rand()%4+'A';
        }
    }
}

char scorAry(char key[],char ans[],char cw[],int n){
    int score=0;
    for(int i=0;i<n;i++){
        if(key[i]==ans[i]){
            score++;
            cw[i]='C';//C for Correct!
        }else{
            cw[i]=key[i]+32;//Lower Case key answer
        }
    }
    return score;
}

void prntAry(char a[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void fillAry(char a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%4+'A';
    }
}