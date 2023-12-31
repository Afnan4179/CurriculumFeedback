
// Header guard: Prevents the header file from being included multiple times in the same compilation
#ifndef INDEPENDANT_FUNCTIONS_H
#define INDEPENDANT_FUNCTIONS_H

// Including necessary libraries for our functions
#include <iostream>     // Input and output operations
#include <string>       // String handling
#include <fstream>      // File input and output
#include <windows.h>    // Windows API functions
#include <stdio.h>      // Standard input and output functions
#include <filesystem>   // Filesystem related functions

// Using the standard namespace for simplicity
using namespace std;

// Function to clear the console screen
void CLEAR_SCREEN();

// Function to exit the program
void EXIT();

// Function to display a title on the screen
void TITLE();

// Function to display the main menu or exit option
int MAIN_MENU_OR_EXIT(int choice);

// Ending the header guard
#endif 