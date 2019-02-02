/****************************************
*
* Alex Engle
* CS 3560
* Homework 1
* Replace function header file
*
****************************************/
#ifndef REPLACE
#define REPLACE

#include <string>

// Function: my_replace
// Effect: searches s for all instances of target and replaces them with replace
// Parameters: string s to serach, string target to search for, string replace to replace with
// Return type: void (edits string s as a reference)
// Conditions: none
void my_replace(std::string& s, const std::string& target, const std::string& replace);

#endif
