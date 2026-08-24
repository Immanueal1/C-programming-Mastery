/*
=====================================

Question Number: 01

Title: Sensor Boot Sequence

Difficulty: Easy

Concepts Used: printf(), Escape Sequences

Problem Statement:
You are programming an ESP32 microcontroller for a prototype. Write a program that prints a precise boot sequence to the console. The output must span exactly three lines.

Source:
Chapter 1 Practice Workbook

Author:
Immanueal

Repository:
C-Programming-Mastery

=====================================
*/

#include <stdio.h>

int main()
{
    printf("System Booting...\n\
Initializing NIR Sensor...\n\
Ready.\n");

    return 0;
}
