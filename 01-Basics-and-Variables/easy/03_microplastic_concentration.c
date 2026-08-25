/*
=====================================

Question Number: 03

Title: Microplastic Concentration

Difficulty: Easy

Concepts Used: scanf(), float, & Operator

Problem Statement:
Your NIR-Based Microplastic Analyzer detects a specific concentration of plastic in a water sample. Write a program that asks the user to input a decimal value and then prints it back.

Source:
Chapter 1 Practice Workbook

Author:
Immanueal

Repository:
C-Programming-Mastery

=====================================
*/

#include <stdio.h>

int main(void)
{
    float conc;//We first have to declare the vairalble type and name

    printf("Enter concentration: "); //This show what you have to display 
    scanf("%f", &conc); //there after scanf scans what you type in and stores it in conc by Address-Of operator (&) in your scanf().

    printf("Concentration: %.6f mg/L\n", conc); /*%f is the format specifier for a float.
    .6 means display exactly 6 digits after the decimal point.
    conc supplies the value to print.*/ 

    return 0;
}
