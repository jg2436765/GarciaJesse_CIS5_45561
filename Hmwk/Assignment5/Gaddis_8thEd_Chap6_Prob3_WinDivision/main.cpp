/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17, 2017, 8:39 PM
 * Purpose:  Winning Division
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getSales(string);
void fHighst(float,float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float NEsale,SEsale,NWsale,SWsale;
    
    //Map inputs to outputs or process the data
    for (int i=0;i<4;i++){
        switch (i){
            case 0: NEsale = getSales("NE");break;
            case 1: SEsale = getSales("SE");break;
            case 2: NWsale = getSales("NW");break;
            default: SWsale = getSales("SW");break;
        }
    }
    fHighst(NEsale,SEsale,NWsale,SWsale);
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

float getSales(string name){
    float sale = 0;
    cout<<"Enter the sales for division "<<name<<" $";
    cin>>sale;
    while (sale < 0){
        cout<<"sales can't be a negative number. Enter a positive number.";
        cin>>sale;
    }
    return sale;
}

void fHighst(float NEsale,float SEsale,float NWsale,float SWsale){
    float highest = 0;
    string division = " ";
    if(NEsale > SEsale && NEsale > NWsale && SEsale > SWsale){
        highest = NEsale;
        division = "North East";
    }else if(SEsale > NEsale && SEsale > NWsale && SEsale > SWsale){
       highest = SEsale;
       division = "South East"; 
    }else if(NWsale > NEsale && NWsale > SEsale && NWsale > SWsale){
       highest = NWsale;
       division = "North West"; 
    }else{
        highest = SWsale;
        division = "South West";
    } cout<<endl;
    cout<<"The Division with the highest sales is "<<division<<" with total"
            " sales "<<highest<<endl;
}