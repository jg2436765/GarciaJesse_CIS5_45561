/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17, 2017, 9:08 PM
 * Purpose:  Safest Driving Area
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int getNumAccd(string);
void findLowest(int,int,int,int,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int accN,
        accS,
        accE,
        accW,
        accC;    
            
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    for (int i = 0; i<5;i++){
        switch(i){
            case 0: accN=getNumAccd("North");break;
            case 1: accS=getNumAccd("South");break;
            case 2: accE=getNumAccd("East");break;
            case 3: accW=getNumAccd("West");break;
            default: accC=getNumAccd("Central");break;
        }
    }
    
    findLowest(accN,accS,accE,accW,accC);
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

int getNumAccd(string region){
    int accidents = 0;
    cout<<"Enter the number of accidents for region "<<region<<" ";
    cin>>accidents;
    while(accidents < 0){
        cout<<"Enter a valid number of accidents.";
        cin>>accidents;
    }
    return accidents;
}

void findLowest(int reg1,int reg2,int reg3,int reg4,int reg5){
    int lowest = 0;
    string region = " ";
    
    if(reg1<reg2 && reg1<reg3 && reg1<reg4 && reg1<reg5){
        lowest=reg1;
        region="North";
    }else if(reg2<reg1 && reg2<reg3 && reg2<reg4 && reg2<reg5){
        lowest=reg2;
        region="South";
    }else if(reg3<reg2 && reg3<reg3 && reg3<reg4 && reg3<reg5){
        lowest=reg3;
        region="East";
    }else if(reg4<reg1 && reg4<reg3 && reg4<reg2 && reg4<reg5){
        lowest=reg4;
        region="West";
    }else{
        lowest=reg5;
        region="Central";
    }
    cout<<endl;
    cout<<"The Region with the lowest accidents is "<<region<<endl;
    cout<<"Total number of accidents were: "<<lowest<<endl;
}