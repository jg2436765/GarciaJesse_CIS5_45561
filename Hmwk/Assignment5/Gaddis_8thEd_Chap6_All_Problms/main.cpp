/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 17, 2017, 9:32 PM
 * Purpose:  All Programs Combined
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
#include <iomanip>
#include <cstdlib>   //Random number
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void calculateRetail(float,float,float);
float getLength();
float getWidth();
float getArea( float, float );
void displayData( float, float, float );
float getSales(string);
void fHighst(float,float,float,float);
int getNumAccd(string);
void findLowest(int,int,int,int,int);
void fllngDst(float, float);
void kinEnrgy(float, float, float);
void celsius(float, float);
float presVal(float,float,int);
void coinToss(int,int,int,char);

//Execution begins here
int main(int argc, char** argv) {
//Declare variables
    float whlsale;
    float mrkup;
    float pRetail;
    
    //Initialize variables
    cout<<"Enter the items whole sale price: ";
    cin>>whlsale;
    cout<<"Enter the items mark up % : ";
    cin>>mrkup;
    
    //Call calculateRetail function
    calculateRetail(whlsale,mrkup,pRetail);
    
    //Declare variables
    float length;
    float width;
    float area;
    
    //Get the rectangles length
    length = getLength();
    
    //Get the rectangles width
    width = getWidth();
    
    //Get the rectangles area
    area = getArea(length,width);
    
    //Call displayData
    displayData( length, width, area); 
    
    
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
    
    //Declare variables
    float distnce;//measured in meters
    float time;//measured in seconds from [0,10]
    float g=9.8;//gravity force
    
    //Initialize variables
    cout<<"The falling distance of an object is measured"
            " in distance and time."<<endl;
    cout<<"Display the Distance from 0 to 10 seconds."<<endl;
    cout<<endl;
    
    //Call the fllngDst function
    fllngDst(distnce, time);
    
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
    
   
    
    //Declare variables
    float F = 0;//Future Value
    float r = 0;//Interest Rate
    int n = 0;//Number of Years
    float P = 0;
    
    //Initialize variables
    cout<<"Enter the amount of money you are trying to save: $";
    cin>>F;
    cout<<"Enter the interest rate: ";
    cin>>r;
    cout<<"Enter the number of years you want to be saving: ";
    cin>>n;
    
    //Calculations
    P = presVal(F,r,n);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"In order to save $"<<F<<" you need to deposit $"<<P<<endl;
    
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time));
    
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
void calculateRetail(float whlsale,float mrkup,float pRetail){
    //Calculations
    pRetail = whlsale * (mrkup/100) + whlsale;
    
    //Retail price 
    cout<<"The Retail Price of this item is $ "<<pRetail<<endl;
    cout<<endl;
}


float getLength(){
    float length;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    return length;
}
float getWidth(){
    float width;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;
    return width;
}
float getArea(float l, float w){
    return l * w;
}
void displayData( float l, float w, float a){
   cout<<"Length: "<<l<<" Width: "<<w<<" Area: "<<a<<endl; 
   cout<<endl;
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
    cout<<endl;
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
    cout<<endl;
}


void fllngDst(float distnce, float time){
    float g=9.8;
    for (time=0;time<=10;time++){
    distnce = (1.0/2.0)*(g*pow(time,2)); 
    cout<<"The Distance traveled is "<<distnce<<" m/s"<<endl;
    }  
    cout<<endl;
}


void kinEnrgy(float KE, float velocty, float mass){
   KE = (1.0/2.0)*(mass*pow(velocty,2));
   cout<<"The Kinetic Energy is = "<<KE<<endl;
   cout<<endl;
}

void celsius(float fahrnt, float cel){
    for (fahrnt=0;fahrnt<=20;fahrnt++){
 
        //Formula
        cel = (5.0/9.0)*(fahrnt-32);
        cout<<"  "<<fahrnt<<"             "<<cel<<endl;
    }  
    cout<<endl;
}



float presVal(float F,float r,int n){
    float P;
    P = F / (pow(1 + (r*0.01),n));
    
    return P;
    cout<<endl;
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