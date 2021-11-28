/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Goldsmith
 */

#include "std_lib_facilities.h"

//Checks if a given string is an integer by checking that each section is exclusively a number
bool isOperator(string str){
    for (int i = 0; i < str.length(); i++)
        if (str=="+"||str=="-"||str=="/"||str=="*"||str=="%")
            return true;
        return false;
}
double getOperator(string str, double num1, double num2){
    String ret;
    if(str=="+")
        return num1+num2;
    if(str=="-")
        return num1-num2;
    if(str=="/")
        return num1/num2;
    if(str=="*")
        return num1*num2;
    if(str=="%")
        return (int)num1%(int)num2;
}

int main(){
    string op;
    double num1;
    double num2;

    cout <<"Please enter an operator (+,-,/,*, or %) followed by two Integers: ";

    //Checks to ensure input is composed of doubles and operators
    while (1) {
        if (cin >> op >> num1 >> num2 && isOperator(op)) {
            // valid input
            break;
        } else {
            // not a valid number
            cout << "Invalid Input! Please try again: ";
            cin.clear();
            while (cin.get() != '\n') ; // empty loop
            }
        }

    double result= getOperator(op,num1,num2);
    cout <<"The Result of "<<num1 <<op <<num2 <<" is "<< result;
}
