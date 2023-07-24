/*
Problem Statement:

SIMPLE CALCULATOR

Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/

#include<bits/stdc++.h>
using namespace std;

//main function
int main()
{
    //variable declaration
    float first_number,second_number,addition,subtraction,multiplication,division;
    int choice,demand;

    //accepting number from users
    cout<<"Input first number: "<<endl;
    cin>>first_number;

    cout<<"Input second number: "<<endl;
    cin>>second_number;

    // do while loop
    do{

    cout<<"\nOperations to perform are: "<<endl;

    cout<<"\n1. Addition \n2. Subtraction  \n3. Multiplication \n4. Division"<<endl;
    
    //choice acceptance
    cout<<"\nEnter your choice: "<<endl;
    cin>>choice;

        //switch case
        switch(choice)
        {
            //case 1 addition
            case 1:
            {
                addition=first_number+second_number;
                cout<<"Addition of "<<first_number<<" and "<<second_number<<" is "<<addition<<endl;
                break;
            }

             //case 2 subtraction
            case 2:
            {
                subtraction=first_number-second_number;
                cout<<"Subtraction of "<<first_number<<" and "<<second_number<<" is "<<subtraction<<endl;
                break;
            }

             //case 3 multiplication
            case 3:
            {
                multiplication=first_number*second_number;
                cout<<"Multiplication of "<<first_number<<" and "<<second_number<<" is "<<multiplication<<endl;
                break;
            }

             //case 4 division
            case 4:
            {
                division=first_number/second_number;
                cout<<"Division of "<<first_number<<" and "<<second_number<<" is "<<division<<endl;
                break;
            }

        }

        //whether to continue?
        cout<<"\nTo continue, Press 1: "<<endl;
        cin>>demand;
        
    }while(demand==1);

    return 0;
    
}

