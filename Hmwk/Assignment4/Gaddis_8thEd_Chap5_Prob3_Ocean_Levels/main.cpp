/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 9, 2017, 8:42 PM
 * Purpose:  Calculating Ocean Levels
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
    int years;
    const float OLEVEL = 1.5;//Ocean level at 1.5 millimeters per year
    float totRisen;//Total ocean level risen every year 
    
    //Initialize variables
    totRisen = OLEVEL * years;
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"How much will the ocean level rise in 25 years? "<<endl;
    
    //Output the transformed data
    for (years = 1; years <= 25; years++)
    {
        cout<<"The ocean level in year 1 is: "<<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 2 is: "<<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 3 is: "<<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 4 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 5 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 6 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 7 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 8 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 9 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 10 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 11 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 12 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 13 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 14 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 15 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 16 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 17 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 18 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 19 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 20 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 21 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 22 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 23 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 24 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1
        cout<<"The ocean level in year 25 is: "
        <<OLEVEL*years<<"mm"<<endl;
        years++;//Increment by 1 
    }
    
    //Exit stage right!
    return 0;
}

