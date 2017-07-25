/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 24, 2017, 9:14 PM
 * Purpose:  Charge Account Validation Volume 2
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
const int SIZE=18;
void selSrt(int [SIZE]);//selection sort
bool brySrch(int, int ary[SIZE]);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int account[]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                   8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                   1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int num;
    bool found=true;
    

    cout<<"Enter an account number: ";
    cin>>num;
    
    
    //Sort the values
    selSrt(account);
    if(found==brySrch(num,account))
        cout<<"Account "<<num<< "is a invalid account.";
    else
         cout<<"Account "<<num<< " is a valid account.";   
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void selSrt(int array[SIZE]){
    int minIndx=0;
    for(int i=0;i<(SIZE-1);i++){
        int minIndx=i;
        int minVal=array[i];
        for(int j=i+1;j<SIZE;j++){
            if(array[j]<minVal){
                minVal=array[j];
                minIndx=j;
            }
        }
        //swap the values
        int temp=array[i];
        array[i]=minVal;
        array[minIndx]=temp;
    }   
}

bool brySrch(int num, int array[SIZE]){
    int first;
    int middle;
    int last=SIZE-1;
    int loctn;
    while(first<=last){
        middle=(first+last/2);
        if(array[middle]==num)
            return true;
        else if(array[middle]>num)
            last=middle-1;
        else 
            first=middle+1;
    }
    return false;
}
